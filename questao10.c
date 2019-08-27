/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 10. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]; .
Suponha que depois da declaração, x esteja armazenado no endereço
de memória 4092 (ou seja, o endereço de x[0] ). Suponha também
que na máquina seja usada uma variável do tipo char ocupa 1 byte, do
tipo int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double
ocupa 8 bytes. Quais serão os valores de x+1 , x+2 e x+3 se:

[RESPOSTA]

x for declarado como char?
a) O endereço de memória 4092 eh incrementado de byte em byte: 4093 4094 4095

x for declarado como int?
b) O endereço de memória 4092 eh incrementado de 2 em 2 bytes: 4094 4096 4098

x for declarado como float?
c) O endereço de memória 4092 eh incrementado de 4 em 4 bytes: 4096 4100 4104

x for declarado como double?
d) O endereço de memória 4092 eh incrementado de 8 em 8 bytes: 4100 4108 4116

*/


#include <stdio.h>

int main(){
    char vet1[4];
    int vet2[4];
    float vet3[4];
    double vet4[4];

    for(int i=0; i<=3; i++){
        printf("%d ", (vet1+i));
    }
    printf("\n");

    for(int i=0; i<=3; i++){
        printf("%d ", (vet2+i));    //no computador usado inteiro ocupa 4 bytes
    }
    printf("\n");

    for(int i=0; i<=3; i++){
        printf("%d ", (vet3+i));
    }
    printf("\n");

    for(int i=0; i<=3; i++){
        printf("%d ", (vet4+i));
    }
    printf("\n");
}
