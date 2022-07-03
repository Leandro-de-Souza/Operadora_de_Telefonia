#include <bits/stdc++.h>

using namespace std;

int main()
{

      int minutos;
      double valorpago;

      cout << "Digite a quantidade de minutos: ";
      cin >> minutos;

      valorpago = 50.00;

      if (minutos > 100) {
          valorpago = valorpago + 2.00 * (minutos - 100);
      }

      cout << fixed << setprecision(2);
      cout << "Valor a pagar: R$ " << valorpago << endl;


    return 0;
}
