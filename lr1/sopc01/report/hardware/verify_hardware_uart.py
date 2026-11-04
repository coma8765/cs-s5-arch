"""Verify the lab UART on a physical board after configuring its FPGA."""
import argparse, json, os, select, termios, time
from pathlib import Path
p=argparse.ArgumentParser();p.add_argument('--port',default='/dev/cu.usbserial-10');p.add_argument('--timeout',type=float,default=600);a=p.parse_args()
root=Path(__file__).resolve().parents[1];out=root/'evidence';out.mkdir(exist_ok=True)
banner=b'Hello from System on Chip\nSystem ID: 00075502\nSend any character\n'
probe=bytes([0x41,0,0x7f,0xff,10]);received=bytearray();sent=False;echo_start=None;deadline=time.monotonic()+a.timeout
fd=os.open(a.port,os.O_RDWR|os.O_NOCTTY|os.O_NONBLOCK)
old=termios.tcgetattr(fd);cfg=termios.tcgetattr(fd)
cfg[0]=0;cfg[1]=0;cfg[2]=termios.CS8|termios.CREAD|termios.CLOCAL;cfg[3]=0;cfg[4]=termios.B115200;cfg[5]=termios.B115200;cfg[6][termios.VMIN]=0;cfg[6][termios.VTIME]=0
termios.tcsetattr(fd,termios.TCSANOW,cfg)
result={'physical_board':True,'port':a.port,'baud':115200,'format':'8N1','passed':False}
try:
 print('UART ready; waiting for FPGA startup greeting',flush=True)
 while time.monotonic()<deadline:
  if not select.select([fd],[],[],1)[0]:continue
  chunk=os.read(fd,4096)
  if not chunk:continue
  received.extend(chunk);(out/'hardware-uart-rx.bin').write_bytes(received)
  print('RX',chunk.hex(' '),repr(chunk),flush=True)
  if not sent and banner in received:
   echo_start=len(received);os.write(fd,probe);sent=True;deadline=min(deadline,time.monotonic()+10)
   print('TX echo probe:',probe.hex(' '),flush=True)
  if sent and len(received)-echo_start>=len(probe):
   echo=bytes(received[echo_start:echo_start+len(probe)])
   result.update(greeting=banner.decode(),echo_sent_hex=probe.hex(' '),echo_received_hex=echo.hex(' '),passed=echo==probe)
   break
 if not result['passed']:result['error']='Echo mismatch or timeout waiting for greeting/echo'
 result['received_hex']=received.hex(' ')
 (out/'hardware-uart-verification.json').write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n')
 print(json.dumps(result,ensure_ascii=False),flush=True)
finally:
 termios.tcsetattr(fd,termios.TCSANOW,old);os.close(fd)
raise SystemExit(0 if result['passed'] else 1)
