Algoritmo KMP
=============
Esse repositório possui funções implementadas em linguagem C.
Segue a lista das funções :

* Constroi Tabela de Prefixos;
* Códico KMP;

Instruções para Compilação
--------------------------
Para compilar `` kmp.c `` com `` teste_kmp.c `` , ou seja, caso deseja testar o código de `` kmp.c `` :

* `` ~$ gcc kmp.c teste_kmp.c -Wall -std=c99 -pedantic ``

Para compilar `` kmp.c `` com `` main.c `` , ou seja, caso deseja executar o código e realizar seus próprios testes :

* `` ~$ gcc kmp.c main.c -Wall -std=c99 -pedantic ``

Instruções para Execução
------------------------
Para executar o arquivo já compilado com `` teste_kmp.c `` :

* `` ~$ ./a.out ``

Para executar o arquivo já compilado com `` main.c `` :

* `` ~$ ./a.out ``
* `` ~$ ./a.out < arquivo_entrada.txt ``

Desempenho do KMP
------------------

* O algoritmo KMP é linear: faz apenas M comparações entre caracteres para construir a tabela de prefixo e depois no máximo N comparações entre caracteres para procurar o padrão.
* Proposição N. O algoritmo KMP examina não mais que M + N caracteres.

Execução do Programa (Teste)
----------------------------
![grab-landing-page](https://j.gifs.com/nrq8kP.gif)

Execução do Programa (Principal)
--------------------------------
![grab-landing-page](https://j.gifs.com/W7ym9n.gif)
