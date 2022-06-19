//AssemblyEmitter
//Author: AJ Arun Kumar
//This suppliments GNULinux.pdf Program 10

//TODO: make add.so a command line argument
//TODO: extend AsmEtr to emit multiple functions in add.so

using System.Linq;
using System.Diagnostics;

//string addsoPath = "/home/arunkumar/GNULinuxPDFJournal2/10.1/add.so";
var psi = new ProcessStartInfo
{
    UseShellExecute = false,
    FileName = $"objdump",
    Arguments = "-d add.so",
    RedirectStandardOutput = true
};

Process shellCommand = new();
shellCommand.StartInfo = psi;
shellCommand.Start();
string v = await shellCommand.StandardOutput.ReadToEndAsync();
var agg = v
    .Split('\n')
    .Skip(7)
    .Where(x => x.Trim().Length > 0) // clear empty lines
    .SelectMany(x => x.Substring(6, 11).Split(" "))
    .Where(x => x.Trim().Length > 0) // clear empty lines again
    .Select(x => @"\x" + x)
    .Aggregate((p1, p2) => p1 + p2);

Console.WriteLine(agg);