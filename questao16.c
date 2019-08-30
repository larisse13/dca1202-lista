/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */

/*
16. Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria
    função de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um 
    ponteiro para a função de comparação.


[RESPOSTA]

*/

#include<stdio.h>
#include<stdlib.h>

//Funcao que realiza a comparacao
int func_comp(float x, float y) {
    //Cast para alterar os ponteiros const void *x e y para valores inteiros
    //Se x<y retorna valor <0, se x=y retorna 0 e se x>y retorna >0
    return ( x > y );
}

//Funcao para ordenar os floats do vetor
void func_ordena(float *vet, int n, int tam, int (*func_comp)(float, float)) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n -1 -i; j++) {
            if (func_comp(vet[j], vet[j+1])) {
                float aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}


int main(){
    int i, n, tam;
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

    //Funcao func_ordena realiza a ordenacao
    tam = sizeof(float);
    func_ordena(vet, n, tam, func_comp);

    //Imprime o vet apos da ordenacao
    printf("\nvet apos ordenacao: \n");
    for(i = 0 ; i < n; i++ ) {
       printf("%.2f ", vet[i]);
    }
    printf("\n");

    return 0;
}
