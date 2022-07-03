#include <stdio.h>


int main()
{

      int minutos;
      double valorPago;

      printf("Digite a quantidade de minutos: ");
      scanf("%d", &minutos);

      valorPago = 50.00;

      if (minutos > 100) {
          valorPago = (double) valorPago + (minutos - 100) * 2;
      }

      printf("Valor a pagar: R$ %.2lf", valorPago);



    return 0;
}
