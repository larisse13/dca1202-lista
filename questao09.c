/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 9. O que fazem os seguintes programas em C?
 *
[RESPOSTA]

int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%d ", *(vet+i));
    }
}
a) Esse programa usa o laço for para fazer o incremento do ponteiro e imprimir os valores dos elementos do vetor vet.

int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }
}
b) Esse programa faz o mesmo que o anterior, porem dessa vez imprime os endereços no formato hexadecimal e com as letra maiusculas.

*/

#include <stdio.h>

int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
//        printf("%d ", *(vet+i));
        printf("%X ", (vet+i));
    }
}

