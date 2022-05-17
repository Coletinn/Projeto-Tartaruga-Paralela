## Controle de acesso à região crítica para a variável global compartilhada

Nesta versão do projeto, o acesso à região crítica da variável global se dá através da função de calculoSerieTaylor,<br/> 
onde será um número digitado pelo usuário e o comando "pragma omp for" fará o trabalho de delegar as tarefas paralelamente<br/>
para as threads e um dos parâmetros dessa função é um ponteiro que a função main irá utilizar para acessar a memória e conseguir</br>
assimilar os dados e a lógica presente na função de cálculo.
