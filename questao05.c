/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


// 5. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).

#include <stdio.h>

int main() {

    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);
    //[RESPOSTA] a) Será impresso 20, pois o valor do endereço para o qual o ponteiro está apontando foi modificado para 20.

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);
    //[RESPOSTA] b) Será impresso 29.0, pois o valor do endereço para o qual o ponteiro está apontando foi modificado para 29.0.

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    //[RESPOSTA] c) Será impresso o caractere P, pois o valor do endereço para o qual o ponteiro está apontando eh a posição 1 da string.

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    //[RESPOSTA] d) Será impresso o caractere e, pois o valor do endereço para o qual o ponteiro está apontando eh a posição 5 da string.

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);

    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);

    /* (g) */
    p3--;
    printf("%c \n", *p3);

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);

    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);

    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    /* (n) */
    p5++;
    printf("%d \n", *p5);

    return(0);
}