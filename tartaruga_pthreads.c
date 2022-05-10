// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125
// Leonardo Sergio Caus Donda 32087535

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

// quatro threads para paralelização
#define QTD_THREADS 4

// soma para resultado final da soma das threads
double soma = 0.0;

// 1 thread
void primeira(void id)
{
	double i = 0.0;

  for (i = 1.0; i <= 250.0; i++)
	{
		soma = soma + 1 / i;
	}
}

// 2 thread
void segunda(void id)
{
	double i = 0.0;

  for (i = 251.0; i <= 500.0; i++)
	{
		soma = soma + 1 / i;
	}
}

// 3 thread
void terceira(void id)
{
	double i = 0.0;

  for (i = 501.0; i <= 750.0; i++)
	{
		soma = soma + 1/i;
	}
}

// 4 thread
void quarta(void id)
{
	double i = 0.0;

  for (i = 751.0; i <= 1000.0; i++)
	{
		soma = soma + 1 / i;
	}
}

int main()
{
	pthread_t threads[QTD_THREADS];
  
	long temp = 0;

  // cria quatro threads para separar as tarefas com o objetivo de paralelizar
  // e aumentar a performance do programa
	int thread1 = pthread_create(&threads[0], NULL, primeira, (void*) temp);
	int thread2 = pthread_create(&threads[1], NULL, segunda, (void*) temp);
  int thread3 = pthread_create(&threads[2], NULL, terceira, (void*) temp);
  int thread4 = pthread_create(&threads[3], NULL, quarta, (void*) temp);
	
    	if (thread1 || thread2 || thread3 || thread4)
    	{
        	printf("Thread com erro");
    	}
    	else
    	{
        // o join serve para sinalizar que após a criação das threads, espera
        // que a primeira conclua sua tarefa para depois esperar que a segunda 
        // conclua, a terceira conclua e assim por diante
        	pthread_join(threads[0], NULL);
        	pthread_join(threads[1], NULL);
          pthread_join(threads[2], NULL);
          pthread_join(threads[3], NULL);
        	printf("A soma eh: %f", soma);
    	}
	return 0;
}