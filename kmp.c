/* * * * * * * * * * * * * * * * * * * * * * * * *
 *                                               *
 * Nome : Rafael Escaleira Ferreira dos Santos.  *
 * Universidade Federal do Mato Grosso do Sul    *
 * Disciplina : Estrutura de Dados e Programação *
 *                                               *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "kmp.h"

void constroi_tabela_prefixo (char * p, int  * tabela_prefixo) {

    int i, j, m;

    m = strlen(p);
    j = - 1;
    i = 0;
    * (tabela_prefixo) = - 1;

    printf (" Tabela de Prefixo\n\n");

    for (i = 1; i < m; i ++){

        while (j > - 1 && * (p + j + 1) != * (p + i)) {

            j = * (tabela_prefixo + j);

        }

        if (* (p + j + 1) == * (p + i)) {

            j = j + 1;

        }

        * (tabela_prefixo + i) = j;

    }

    for (i = 0; i < m; i ++) {

        printf ("%2d ", i);

    }

    printf ("\n");

    for (i = 0; i < m; i ++) {

        printf ("%2c ", * (p + i));

    }

    printf ("\n");

    for (i = 0; i < m; i ++) {

        printf ("%2d ", * (tabela_prefixo + i));

    }

    printf ("\n");

}

int kmp (char * p, char * t, int * resultado) {

    int n, m, i, j, k;
    int * tabela_prefixo;

    n = strlen (t);
    m = strlen (p);
    j = 0;
    k = 0;

    tabela_prefixo = (int *) malloc(m * sizeof (int));

    constroi_tabela_prefixo (p, tabela_prefixo);

    printf ("\n");

    for(i = 1; i < n; i ++) {

        while(j > - 1 && * (p + j + 1) != * (t + i)) {

            j = * (tabela_prefixo + j);

        }

        if (* (p + j + 1) == * (t + i)) {

            j = j + 1;

        }

        if (j == (m - 1)) {

            * (resultado + k) = i - (m - 1);
            k = k + 1;
            j = * (tabela_prefixo + j);

        }

    }

    return k;

}

void constroi_tabela_prefixo_confere_funcionamento (char * p, int  * tabela_prefixo) {

    int i, j, m;

    m = strlen(p);
    j = - 1;
    i = 0;
    * (tabela_prefixo) = - 1;

    for (i = 1; i < m; i ++){

        while (j > - 1 && * (p + j + 1) != * (p + i)) {

            j = * (tabela_prefixo + j);

        }

        if (* (p + j + 1) == * (p + i)) {

            j = j + 1;

        }

        * (tabela_prefixo + i) = j;

    }

}

int kmp_confere_funcionamento (char * p, char * t, int * resultado) {

    int n, m, i, j, k;
    int * tabela_prefixo;

    n = strlen (t);
    m = strlen (p);
    j = 0;
    k = 0;

    tabela_prefixo = (int *) malloc(m * sizeof (int));

    constroi_tabela_prefixo_confere_funcionamento (p, tabela_prefixo);

    for(i = 1; i < n; i ++) {

        while(j > - 1 && * (p + j + 1) != * (t + i)) {

            j = * (tabela_prefixo + j);

        }

        if (* (p + j + 1) == * (t + i)) {

            j = j + 1;

        }

        if (j == (m - 1)) {

            * (resultado + k) = i - (m - 1);
            k = k + 1;
            j = * (tabela_prefixo + j);

        }

    }

    return k;

}

void confere_funcionamento () {

    char * modelo;
    char * text;
    int * resultado;
    int tamanho;

    resultado = (int *) malloc (18 * sizeof (int));

    modelo = "abcabc";
    text    = "abcabcabcdababcabc";

    tamanho = kmp_confere_funcionamento (modelo, text, resultado);

    assert (* (resultado) == 0);
    assert (* (resultado + 1) == 3);
    assert (* (resultado + 2) == 12);

    cor_texto (vermelho);
    printf(" * ");
    estilo_texto (resetar);

    printf("Código KMP");

    cor_texto (verde);
    printf(" OK\n\n");
    estilo_texto (resetar);

}

void teste_kmp () {

    char * modelo;
    char * text;
    int * resultado;
    int tamanho, i;

    resultado = (int *) malloc (18 * sizeof (int));

    modelo = "abcabc";
    text    = "abcabcabcdababcabc";

    printf (" Modelo : %s\n", modelo);
    printf (" Texto  : %s\n\n", text);

    tamanho = kmp (modelo, text, resultado);

    for (i = 0; i < tamanho; i ++) {

        printf(" Match na posição : %d\n", * (resultado + i));

    }

}

void teste_constroi_prefixo () {

    char * x;
    int m, i;
    int * table;

    table = (int *) malloc (10 * sizeof (int));

    x = "abcabcx";

    printf (" Modelo : %s\n\n", x);
    
    constroi_tabela_prefixo (x, table);

    m = strlen (x);

    for (i = 0; i < m; i ++) {

        printf ("%2d ", * (table + i));

    }

    printf ("\n");

}
