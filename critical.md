## Controle de acesso à região crítica para a variável global compartilhada

Nesta versão do projeto, o acesso à região crítica da variável global se dá através do comando "#pragma omp critical" na função calculoSerieTaylor onde criamos uma variável local para armazenamento e realização do cálculo da soma para depois indicar o valor dessa soma para a variável global. O comando "pragma omp critical" fará o trabalho de sinalizar que apenas uma thread por vez deve executar o bloco de código seguinte, ou seja, se uma thread estiver executando esse bloco nenhuma outra thread pode executar esse bloco. Sendo assim, realizamos o código de modo síncrono.

