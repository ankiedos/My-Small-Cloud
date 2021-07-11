using System;
using System.Threading.Tasks;
namespace Oldschoolprogrammer.Blog
{
    class Reader
    {
            public async Task SignIn(Reader.name, string email)
            {
                object sub = new Subscribent(Reader.name, email);
            }
    }
}
namespace Oldschoolprogrammer.Blog.Newsletter
{
    class Subscribent : Reader
    {
        public static override async Task SignIn(string name, string email_adress)
        {
            new Subscribent(name, email_adress);
        }
        public Subscribent(string name, string email_adress)
        {
            this.name = name;
            this.email = email_adress;
            Console.WriteLine($"Witaj wśrod subskrybentów {this.name}!");
        }

        public Subscribent()
        {
        }

        private string name;
        private string email;

    }
    class Mail
    {
        private static void IsSendCompleted()
        {
            return;
        }
        public static void MailSb(Subscribent sub, string Content, string Topic, string From_mail, string From)
        {
            SmtpClient client = new SmtpClient(Program.Main.args[0]);
            MailAddress from = new MailAddress(From_mail, From, System.Text.Encoding.UTF8);
            
            MailAddress to = new MailAddress(sub);
            MailMessage message = new MailMessage(from, to);
            
            ///Cześć {sub}!
            ///
            ///
            ///{Content}
            ///
            ///
            ///------------
            ///Pozdrawiam,
            ///Antoni Kiedos
            message.Body = $"Cześć {sub}!\n\n{Content}\n\n------------\nPozdrawiam,\nAntoni Kiedos";
            message.BodyEncoding =  System.Text.Encoding.UTF8;
            message.Subject = $"Newsletter Oldschoolprogrammer | {Topic}";
            message.SubjectEncoding = System.Text.Encoding.UTF8;
            
            client.SendCompleted += new SendCompletedEventHandler(IsSendCompleted);
            client.Send(message);
            
            Console.WriteLine("Sending message... press c to cancel mail. Press any other key to exit.");
            
            string answer = Console.ReadLine();
            if (answer.StartsWith("c") && mailSent == false)
            {
                client.SendCancel();
            }
            message.Dispose();
            Console.WriteLine("Goodbye.");
        }
    }
    static class StringE
    {
        public static string[] DivideIntoNameAndSurname(this string person)
        {
            string name = "";
            string surname = "";

            for(int i = 0; i < person.Length; i++)
            {
                if(person[i] != ' ') name += person[i];
                else break;
            }
            for(int i = name.Length + 1; i < person.Length; i++)
            {
                surname += person[i];
            }
            return {name, surname};
        }
    }
    class Program
    {
        
        public static void Main(string[] args)
        {
            Subscribent[] subscribents = new Subscribent[];
            if(signedin) subscribents += Subscribent.SignIn("", "");
            foreach(var sub in subscribents)
            {
                Mail.MailSb(sub, "Testowa wiadomość.\n\nZignoruj.", "TEST", "newsletter@oldschoolprogrammer.pl", "Antoni Kiedos");
            }
            string person1 = "Jim Smith";
            string person1_name = person1.DivideIntoNameAndSurname()[0];
        }
        
    }
}