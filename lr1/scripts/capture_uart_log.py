"""Capture a physical 115200 8N1 UART session and verify text echo."""
import argparse
import datetime
import json
import os
from pathlib import Path
import select
import termios
import time

parser = argparse.ArgumentParser()
parser.add_argument('--port', required=True)
parser.add_argument('--output', type=Path, required=True)
parser.add_argument('--timeout', type=float, default=600)
a = parser.parse_args()
a.output.mkdir(parents=True, exist_ok=True)
log = (a.output / 'uart-session.log').open('w', buffering=1)
def emit(line):
    text = f'{datetime.datetime.now().astimezone().isoformat(timespec="milliseconds")}  {line}'
    print(text, flush=True)
    log.write(text + '\n')

fd = os.open(a.port, os.O_RDWR | os.O_NOCTTY | os.O_NONBLOCK)
old = termios.tcgetattr(fd)
cfg = termios.tcgetattr(fd)
cfg[0] = cfg[1] = cfg[3] = 0
cfg[2] = termios.CS8 | termios.CREAD | termios.CLOCAL
cfg[4] = cfg[5] = termios.B115200
cfg[6][termios.VMIN] = cfg[6][termios.VTIME] = 0
termios.tcsetattr(fd, termios.TCSANOW, cfg)
rx = bytearray()
probe = b'LR1 UART test - Ananyev - IU7-55B - variant 2\r\n'
echo_start = None
passed = False
deadline = time.monotonic() + a.timeout
try:
    emit(f'OPEN {a.port} | 115200 baud | 8N1 | flow control: none')
    emit('Waiting for FPGA program startup...')
    while time.monotonic() < deadline:
        if not select.select([fd], [], [], 1)[0]:
            continue
        chunk = os.read(fd, 4096)
        if not chunk:
            continue
        rx.extend(chunk)
        if echo_start is None and b'Send any character\n' in rx:
            for line in rx.decode('ascii', errors='backslashreplace').splitlines():
                emit('RX  ' + line)
            echo_start = len(rx)
            os.write(fd, probe)
            emit('TX  ' + repr(probe.decode('ascii')))
            deadline = min(deadline, time.monotonic() + 15)
        if echo_start is not None and len(rx) - echo_start >= len(probe):
            echo = bytes(rx[echo_start:echo_start + len(probe)])
            emit('RX  ' + repr(echo.decode('ascii', errors='backslashreplace')))
            passed = echo == probe and b'System ID: 00075502' in rx[:echo_start]
            emit('PASS: startup banner, System ID and byte-for-byte UART echo' if passed else 'FAIL: unexpected response')
            break
    if not passed:
        emit('FAIL: expected startup/echo not received before timeout')
    (a.output / 'uart-rx.bin').write_bytes(rx)
    (a.output / 'verification.json').write_text(json.dumps({'port': a.port, 'baud':115200, 'format':'8N1', 'passed':passed, 'rx_hex':rx.hex(' '), 'tx_hex':probe.hex(' ') if echo_start is not None else ''}, indent=2) + '\n')
finally:
    termios.tcsetattr(fd, termios.TCSANOW, old)
    os.close(fd)
    log.close()
raise SystemExit(0 if passed else 1)
