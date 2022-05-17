// Gustavo Coleto de Freitas 32076541
// Joao Vitor Teles Centrone 32033125
// Leonardo Donda 32087535

#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
  
void calculoSerieTaylor(int num, double* res_global) 
{
    // double para suportar valores mais altos
    double soma = 0.0;
    
    // pragma omp for para delegar as tarefas para as threads, paralelizando o programa
    # pragma omp for
	for(int i = 1; i <= num; i++) 
    {
        soma += (double) 1 / i;
    }

    // fazendo o join nas threads
    # pragma omp critical
	*res_global += soma;
    
} 
 
int main(int argc, char* argv[]) 
{
	double soma_global = 0.0; 						
	unsigned long long int n; 				
	int qtd_threads;		
 
	qtd_threads = strtol(argv[1], NULL, 10);
	printf("Digite um valor: ");
	scanf("%lld", &n);

    # pragma omp parallel num_threads(qtd_threads)
    calculoSerieTaylor(n, &soma_global);
 
	printf("\nA soma da serie de Taylor eh: %f\n", soma_global);
 
	return 0;
} 
 
