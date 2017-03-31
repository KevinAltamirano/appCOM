using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClientCom
{
    class Program
    {
        static void Main(string[] args)
        {
            ServerComLib.ServerObject obj = new ServerComLib.ServerObject();
            obj.getMessages();
            Console.WriteLine(obj.ReturnSomething());
            Console.ReadKey();
        }
    }
}
