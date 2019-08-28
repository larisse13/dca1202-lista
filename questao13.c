/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 13. O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
   escreva um pequeno programa exemplificando o uso deste recurso.

[RESPOSTA]

Ponteiro para uma função eh uma forma de declarar uma variável que armazena o endereço no
início da execução do código de uma função, e que pode ser chamada posteriormente através
desse ponteiro. Outra característica importante eh o fato de não ser necessário alocar e
desalocar memória para o seu uso.

*/


#include<stdio.h>

void exemplo(int x){
    printf("%d \n", x);
}

int main(){
    void (*func)(int) = exemplo;
    func(9);

    return(0);
}
