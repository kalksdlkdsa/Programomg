using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace DateTest
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime latestDate = new DateTime(9999, 12, 31, 23, 59, 59, 999);
            Console.WriteLine(latestDate);
            Console.Read();
        }
    }
}