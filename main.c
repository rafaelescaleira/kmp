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
    printf ("\n * * * * * * * * * * *"); 
    estilo_texto (resetar);
    printf (" Execução KMP ");
    cor_texto (ciano);
    printf ("* * * * * * * * * *\n\n");
    estilo_texto (resetar);

    confere_funcionamento ();

    char * modelo;
    char * text;
    int * resultado;
    int i, tamanho;
    long int n;
    clock_t inicio, fim;

    srand (time (NULL));

    printf(" Quantidade (Modelo) : ");
    scanf ("%ld", &n);

    modelo = (char *) malloc (n * sizeof (char));

    printf (" Modelo : ");
    scanf ("%s", modelo);

    printf("\n Quantidade (Texto) : ");
    scanf ("%ld", &n);

    text = (char *) malloc (n * sizeof (char));

    printf (" Texto  : ");
    scanf ("%s", text);

    printf("\n");

    resultado = (int *) malloc (n * sizeof (int));

    inicio = clock ();
    tamanho = kmp (modelo, text, resultado);
    fim = clock ();

    for (i = 0; i < tamanho; i ++) {

        printf(" Match na posição : %d\n", * (resultado + i));

    }

    printf("\n");

    printf(" Quantidade de match : %d\n", tamanho);

    printf(" Tempo de Execução : %.3lf segundos\n\n", ((double) (fim - inicio) ) / CLOCKS_PER_SEC);

    return 0;

}
