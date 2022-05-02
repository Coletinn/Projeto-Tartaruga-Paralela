// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125
// Leonardo Sergio Caus Donda 32087535

#include <stdio.h>

double serieTaylorRecursao(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else 
  {
    return 1 / (double)n + serieTaylorRecursao(n - 1);
  }
}

int main()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("O valor da soma é: %f\n", serieTaylorRecursao(n));
}
	    