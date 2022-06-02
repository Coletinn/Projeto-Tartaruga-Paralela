// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125
// Leonardo Sergio Caus Donda 32087535

#include <stdio.h>
#include <stdlib.h>

double calculoSerieTaylor(int n)
{
    double sum = 0;

    for (double i = 1; i <= n; i++)
    {
        sum = sum + 1 / i;
    }

    return sum;
}

int main()
{
    int n;
    printf("Valor: ");
    scanf("%d", &n);

    printf("A soma eh: %.2f\n", calculoSerieTaylor(n));
}
	    