using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_OPERADORA {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int minutos;
            double valorpago;

            Console.Write("Digite a quantidade de minutos: ");
            minutos = int.Parse(Console.ReadLine());

            valorpago = 50.00;

            if (minutos > 100) {
                valorpago = valorpago + 2.00 * (minutos - 100);
            }

            Console.WriteLine("Valor a pagar: R$ " + valorpago.ToString("F2", CI));

        }
    }
}
