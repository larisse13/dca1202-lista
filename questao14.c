/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 14. Implemente em linguagem C uma função em um programa de computador que leia n valores
   do tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
   realizar a tarefa.

[RESPOSTA]

*/

#include<stdio.h>

void func(float vet[], int n) {

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(vet[j] > vet[j+1]) {
                float aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%.2f ", vet[i]);
    }
}


int main(){
    int n;
    float *vet;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vet = (float*) malloc(n*sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%f", &vet[i]);
    }

    func(vet, n);

    return 0;
}
