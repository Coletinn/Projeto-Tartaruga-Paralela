## Controle de acesso à região crítica para a variável global compartilhada

Nesta versão do projeto, o acesso à região crítica da variável global se dá através do comando "#pragma omp critical" na função calculoSerieTaylor<br/> 
onde esse comando fará o trabalho de delegar as tarefas paralelamente e fazer o join das threads automaticamente, acessando através do parâmetro<br/>
res_global que é um ponteiro, ou seja, irá acessar os dados na memória para realizar a soma de todas as threads</br>

