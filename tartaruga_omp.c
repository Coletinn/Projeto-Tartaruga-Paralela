// Gustavo Coleto de Freitas 32076541
// Joao Vitor Teles Centrone 32033125
// Leonardo Donda 32087535

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

double soma_global;
double valor = 1000000000;
int qtd_threads = 4;

double calculoSerieTaylor()
{
	int th = omp_get_thread_num();
  	
    double somaLocal;
  	double valorMinimo = (valor / qtd_threads) * th;
	double valorMaximo = (valor / qtd_threads) + valorMinimo;
  	for (double i = valorMinimo + 1; i <= valorMaximo; i++){
		somaLocal += 1 / i;
	}

	#pragma omp critical
	soma_global += somaLocal;
}

int main()
{	
	double t;

	#pragma omp parallel num_threads(qtd_threads)
	{
		calculoSerieTaylor();
	}	 
	printf("A soma eh: %f\n",soma_global);
}