/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


// 6. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).

#include <stdio.h>

int main(void){

    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
        printf("\n i = %d",i);
        printf("vet[%d] = %.1f",i, vet[i]);
        printf("*(f + %d) = %.1f",i, *(f+i));
        printf("&vet[%d] = %X",i, &vet[i]);
        printf("(f + %d) = %X",i, f+i);
    }
}


/* [RESPOSTA]
O primeiro printf mostra o que os cinco printf seguintes mostrarao.
i eh o contador e índice do vetor.
vet[i] eh o valor do vetor no indice i.
*(f + i) também eh o valor do vetor no indice i.
&vet[i] eh o endereço de cada posição do vetor.
f + i também eh o endereço de cada posição do vetor.

contador/valor/valor/endereco/endereco
i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 61FE20 (f + 0) = 61FE20
i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 61FE24 (f + 1) = 61FE24
i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 61FE28 (f + 2) = 61FE28
i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 61FE2C (f + 3) = 61FE2C
i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 61FE30 (f + 4) = 61FE30

*/
