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
            //string result = Convert.ToString(obj.ReturnSomething());
            string result = obj.DevuelveAlgo();
            Console.WriteLine(result);
            Console.ReadKey();
        }

        private static string SByteArrayToString(sbyte[] sbytes)
        {
            //Convert sbyte[] to byte[]
            byte[] byteData = Array.ConvertAll(sbytes, (a) => (byte)a);
            return Encoding.ASCII.GetString(byteData);
        }
    }
}
