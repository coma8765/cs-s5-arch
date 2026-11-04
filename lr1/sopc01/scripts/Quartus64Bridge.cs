using System;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Text;
class Quartus64Bridge {
 static string Quote(string value) {
  var b=new StringBuilder("\""); int n=0;
  foreach(char c in value) {
   if(c=='\\'){n++;continue;}
   if(c=='\"'){b.Append('\\',n*2+1);b.Append(c);n=0;continue;}
   b.Append('\\',n);n=0;b.Append(c);
  }
  b.Append('\\',n*2);b.Append('"');return b.ToString();
 }
 static int Main(string[] args) {
  string self=Assembly.GetExecutingAssembly().Location;
  string target=Path.GetFullPath(Path.Combine(Path.GetDirectoryName(self),"..","bin64",Path.GetFileName(self)));
  if(!File.Exists(target)){Console.Error.WriteLine("Quartus64 target missing: "+target);return 127;}
  var a=new StringBuilder();foreach(string s in args){if(a.Length>0)a.Append(' ');a.Append(Quote(s));}
  var p=new Process();p.StartInfo=new ProcessStartInfo(target,a.ToString());
  p.StartInfo.UseShellExecute=false;p.StartInfo.CreateNoWindow=true;
  p.StartInfo.RedirectStandardOutput=true;p.StartInfo.RedirectStandardError=true;
  p.OutputDataReceived+=(sender,e)=>{if(e.Data!=null)Console.Out.WriteLine(e.Data);};
  p.ErrorDataReceived+=(sender,e)=>{if(e.Data!=null)Console.Error.WriteLine(e.Data);};
  p.Start();p.BeginOutputReadLine();p.BeginErrorReadLine();p.WaitForExit();return p.ExitCode;
 }
}
