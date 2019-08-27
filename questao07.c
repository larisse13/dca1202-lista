/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 7. Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam
      o valor do terceiro elemento do vetor?

[RESPOSTA]

*(pulo + 2);
a) Essa expressão referencia o valor do terceiro elemento do vetor.

*(pulo + 4);
b) Essa expressão referencia o valor do quinto elemento do vetor.

pulo + 4;
c) Essa expressão referencia o endereço do quinto elemento do vetor.

pulo + 2;
d) Essa expressão referencia o endereço do terceiro elemento do vetor.

*/

#include <stdio.h>

int main(void){

    int pulo[5] = {11, 22, 33, 44, 55};

    printf("*(pulo + 2) = %d \n", *(pulo + 2));
    printf("(pulo + 4) = %x \n", (pulo + 2));

}