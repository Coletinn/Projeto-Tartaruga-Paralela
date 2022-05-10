
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

## Resultados

Para a primeira versão foi utilizada recursão, onde o tempo com 10 números da Série de Taylor foi de 2.928968.
Para a segunda versão onde foram utilizadas threads, o resultado obtido foi de 7.485471, sendo uma versão mais simples porém otimizada e melhorada da versão 1.
