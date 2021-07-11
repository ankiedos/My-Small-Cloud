using System;
using System.Threading.Taks;
using System.Management.Automtion;
// Quantum
using Microsoft.Quantum.Simulation.Core;
using Microsoft.Quantum.Simulation.Simulators;
using Program;
namespace KiEnT.Quantum
{
    class Program
    {
        static async Task Main(string[] args)
        {
            using(var qsim = new QuantumSimulator())
            {
                var result = await TestBellState.Run(qsim, args);
            }
            System.Windows.Forms.MessageBox.Show($"{result}");
        }
    }
    class UTest
    {
        [Fact]
        public void DoesTestBellStatePassed()
        {
        //Given
            var cnt = 1000;
            var init = Zero;
            
        //When
            TestBellState(cnt, init);
        //Then
            Assert(TestBellState(cnt, init), Equals((0, 1000)));
        }
    }
    namespace PS.Command
    {
    [Cmdlet(CommonVerb.Get, "Name")]
    public class GetNameCommand : Cmdlet
    {
        private string name;
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        protected override RecordProcess()
        {
            WriteObject($"Hello user-looser {name}!");
            WriteObject("Do you want to proceed the surprise? [y/n]");
            if (ReadObject() == "n")
            {
                System.Windows.Forms.MessageBox.Show("Surprise!", "Your Antivirus");
            }
            else if(ReadObject()  = "y")
            {
                System.Windows.Forms.Application.Exit();
            }
        }
        
    }
}