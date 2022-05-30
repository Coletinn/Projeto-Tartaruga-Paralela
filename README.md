
Esse é o repositório do projeto da Tartaruga de computação paralela, que consiste em 
construir uma solução paralela cujo valor de S seja o maior possível, ou seja,
possua a melhor aproximação para a série ln(T).

## Integrantes do grupo

- Gustavo Coleto de Freitas
- João Vitor Teles Centrone
- Leonardo Donda

## Ambiente de Execução
- Linux Mint Mate 20.3

## Grafo de dependência da primeira versão


![grafo](https://user-images.githubusercontent.com/62111019/167527932-3af0195c-c2eb-42e8-8023-0ac1aff2db9d.PNG)

## Grafo de dependência da segunda versão (utilizando threads)

![560D65A2-5AB2-4462-A519-19D5C1047B92](https://user-images.githubusercontent.com/71039126/167527163-62e8630e-7d17-4d94-bd6a-b5f92c5b876f.png)

## Compilação e execução

Para compilar os programas na plataforma Linux, basta abrir o terminal e digitar o comando: gcc -o nomeDesejado programa.c Por exemplo: gcc -o ex1 ex1.c

Para executar o programa, basta digitar o nome do programa que voce deu no item acima. Por exemplo, se a compilação foi assim: gcc -o ex1 ex1.c Para executar basta digitar no terminal ./ex1

### Para versões utilizando pthreads
Nesse caso, basta digitar no terminal: gcc {nomeArquivo} -o {nomeExecutavel} -lpthread.
Exemplo: gcc tartaruga.c -o tartaruga -lpthread

### Para versões utilizando OpenMP
Nesse caso, para compilar basta digitar no terminal gcc -g -Wall -fopenmp -o {NomeDoExecutavel} {NomeDoArquivo}<br/>
Exemplo: gcc -g -Wall -fopenmp -o tartaruga tartaruga.c<br/>
Para executar basta digitar ./{NomeDoExecutavel} {quantidadeDeThreads}<br/>
Exemplo: ./tartaruga 100

## Resultados

Para a primeira versão foi utilizada recursão, e a soma com 1000000000 (1 bilhão) números da Série de Taylor não foi possível realizar o cálculo pois o programa quebra devido ao alto valor do input (1000000000) porém o programa realiza o cálculo de maneira correta, se o valor não for muito alto.<br/>
Para a segunda versão onde foram utilizadas 4 threads, o resultado obtido para uma soma de 1000000000 (1 bilhão) foi de 13.733999 com um tempo de 0m16,019s, sendo uma versão mais simples porém otimizada e melhorada da versão 1.</br>
Para a terceira versão, utilizando OpenMP o resultado obtido para um valor de 1000000000 (1 bilhão) foi de 21.300482 com um tempo de 0m6,649s segundos, sendo bem mais otimizado e mais rápido do que a versão anterior, ou seja, houve um aumento notável de performance.<br/>

---

![tempo2versao](https://user-images.githubusercontent.com/62111019/171027979-c48edf21-904e-4a7d-b298-4baa32341162.PNG)
---

![tempo3versao](https://user-images.githubusercontent.com/62111019/171027995-9969559c-7829-46dc-8d46-e9fa83e1e118.PNG)

### Speedup
O speedup calculado entre a segunda versão do código e a versão final foi de 2,4092344713s, ou aproximadamente 2,4 segundos.
