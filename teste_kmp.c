/* * * * * * * * * * * * * * * * * * * * * * * * *
 *                                               *
 * Nome : Rafael Escaleira Ferreira dos Santos.  *
 * Universidade Federal do Mato Grosso do Sul    *
 * Disciplina : Estrutura de Dados e Programação *
 *                                               *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "kmp.h"

int main (void) {

    cor_texto (ciano);
	printf ("\n* * * * * * * * * * *");
    estilo_texto (resetar);
    printf (" KMP (Teste) ");
    cor_texto (ciano);
    printf ("* * * * * * * * * *\n\n");
    estilo_texto (resetar);

    teste_kmp ();

    printf("\n");

    confere_funcionamento ();

}
