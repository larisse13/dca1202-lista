/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 8. Considerando a declaração int mat[4], *p, x; , quais das seguintes expressões são válidas? Justifique.

[RESPOSTA]

p = mat + 1;
a) Eh uma expressão válida, pois p eh um ponteiro e recebe um endereço de memória do mesmo tipo dele.
   p aponta para o endereço do segundo elemento do vetor.

p = mat++;
b) Expressão é inválida, pois não é permitido incremento de endereços de vetores.

p = ++mat;
c)  Expressão é inválida, pois não é permitido incremento de endereços de vetores.

x = (*mat)++;
d) Eh uma expressão válida, pois x eh uma variável inteira recebendo o valor da primeira posição do vetor ma”. Que depois eh incrementado.

*/

#include <stdio.h>

int main(void){

    int mat[4] = {11, 22, 33, 44}, *p, *q, x;

    p = mat + 1;
    printf("*p = %d \n", *p);   // apenas p/ comprovar q/ (mat+1) aponta p/ a 2a posição
    printf("p = %x \n", p);

    q = mat;
    printf("q antes do mat ser incrementando em x = %x \n", q);     // ponteiro criado apenas p/ comprovar q/ (mat+1) aponta p/ a 2a posição
    printf("*q antes do mat ser incrementando em x = %d \n", *q);

//    p = mat++;
//    p = ++mat;

    x = (*mat)++;
    printf("x = %d \n", x);

    printf("*q apos mat ser incrementando em x = %x \n", q);     // novo printf apenas p/ comprovar q/ mat foi incrementado na chamada de x
    printf("*q apos mat ser incrementando em x = %d \n", *q);

}
