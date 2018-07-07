/* * * * * * * * * * * * * * * * * * * * * * * * *
 *                                               *
 * Nome : Rafael Escaleira Ferreira dos Santos.  *
 * Universidade Federal do Mato Grosso do Sul    *
 * Disciplina : Estrutura de Dados e Programação *
 *                                               *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef _KMP_H_
#define _KMP_H_

/* * * * * * * * * * * Cores * * * * * * * * * * */

#define cor_texto(cor) cor
#define estilo_texto(estilo_texto_) estilo_texto_

/* * * * * * * * * Cor do Texto * * * * * * * * * */

#define preto printf("\033[30m") 
#define vermelho printf("\033[31m") 
#define verde printf("\033[32m") 
#define amarelo printf("\033[33m") 
#define azul printf("\033[34m") 
#define magenta printf("\033[35m") 
#define ciano printf("\033[36m") 
#define branco printf("\033[37m") 
#define normal printf("\033[39m") 

/* * * * * * * * Estilo do Texto * * * * * * * * */

#define negrito printf("\033[1m")
#define fosco printf("\033[2m")
#define estilo_normal printf("\033[22m")
#define resetar printf("\033[0m")
#define sublinhado printf("\033[4m")
#define piscar printf("\033[5m")
#define italico printf("\033[3m")
#define negativo printf("\033[7m")

/* * * * * * * * * Funções * * * * * * * * * * */

void constroi_tabela_prefixo (char * p, int  * tabela_prefixo);

int kmp (char * p, char * t, int * resultado);

void teste_kmp ();

void teste_constroi_prefixo ();

void confere_funcionamento ();

#endif
