/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 15. Reimplemente o programa da questão anterior utilizando a função qsort() do C.
   Comente o seu código, explicando o que faz cada uma das linhas.


[RESPOSTA]

*/

#include<stdio.h>
#include<stdlib.h>

//Funcao que realiza a comparacao
int func_comp(const void *x, const void *y) {
    return ( *(int*)x - *(int*)y );
}

int main(){
    int i, n;
    float *vet;

    //Pede para que seja informado a quantidade de elementos a serem ordenados
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    //Aloca memoria para o ponteiro vet
    vet = (float*) malloc(n*sizeof(float));

    //Atribui valores ao vet
    for(int i = 0; i < n; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%f", &vet[i]);
    }

    //Imprime o vet antes da ordenacao
    printf("\nvet antes da ordenacao: \n");
    for(i = 0 ; i < n; i++ ) {
       printf("%.2f ", vet[i]);
    }

    //Funcao qsort realiza a ordenacao
    qsort(vet, n, sizeof(float), func_comp);

    //Imprime o vet apos da ordenacao
    printf("\nvet apos ordenacao: \n");
    for(i = 0 ; i < n; i++ ) {
       printf("%.2f ", vet[i]);
    }
    printf("\n");

    return 0;
}
