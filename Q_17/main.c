/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */

/*
17. Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
    computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em
    C que lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
    Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
    das implementações que você criou para os dois problemas de ordenação anteriores e compare
    os resultados obtidos.

[RESPOSTA]

*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

//Funcao que realiza a comparacao
int func_comp(const void *a, const void *b) {
    //Cast para alterar os ponteiros const void *x e y para valores inteiros
    //Se x<y retorna valor <0, se x=y retorna 0 e se x>y retorna >0
    return (*(int *)a - *(int *)b);
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

void printArrayFloat() {
    float *arr;
    int i = 0, j = 0, tam = 0;

    clock_t t;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tam);

    arr = (float *)malloc(tam *sizeof(float));

    if (!arr) {
        printf("Erro: não é possível alocar memória.");
        return;
    }

    for (i = 0; i < tam; i++) {
        scanf("%f", &arr[i]);
    }

    t = clock();
    qsort(arr, tam, sizeof(float), func_comp);
    printf("Tempo usando a funcao qsort (do C):%.2f", (clock() - t) / (double)CLOCKS_PER_SEC);

    printf("\nResultado usando a funcao qsort (do C): ");
    for (i = 0; i < tam; i++) {
        printf("%f ", arr[i]);
    }

    t = clock();
    func_ordena(arr, tam, sizeof(float), func_comp);
    printf("\nTempo usando a funcao sort (criada pelo aluno):%.2f", (clock() - t) / (double)CLOCKS_PER_SEC);

    printf("\nResultado usando a funcao sort (criada pelo aluno): ");
    for (i = 0; i < tam; i++) {
        printf("%f ", arr[i]);
    }

    free(arr);
}

int main(){
    printArrayFloat();
    return 0;
}
