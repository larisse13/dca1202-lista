/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 11. Implemente um programa de computador para testar estas suposições
e compare as respostas oferecidas pelo programa com as respostas que
você idealizou.

[RESPOSTA DA QUESTÃO ANTERIOR]

x for declarado como char?
a) O endereço de memória 4092 eh incrementado de byte em byte: 4093 4094 4095

x for declarado como int?
b) O endereço de memória 4092 eh incrementado de 2 em 2 bytes: 4094 4096 4098

x for declarado como float?
c) O endereço de memória 4092 eh incrementado de 4 em 4 bytes: 4096 4100 4104

x for declarado como double?
d) O endereço de memória 4092 eh incrementado de 8 em 8 bytes: 4100 4108 4116


[RESPOSTA DA QUESTÃO 11]
*/

#include <stdio.h>

int main(){
    char vet1[4], *p1;
    int vet2[4], *p2;
    float vet3[4], *p3;
    double vet4[4], *p4;

    p1 = vet1;
    p2 = vet2;
    p3 = vet3;
    p4 = vet4;

    printf("%d %d %d %d \n", p1, p1+1, p1+2, p1+3);
    printf("%d %d %d %d \n", p2, p2+1, p2+2, p2+3);     // no computador testado inteiro ocupa 4 bytes na memoria
    printf("%d %d %d %d \n", p3, p3+1, p3+2, p3+3);
    printf("%d %d %d %d \n", p4, p4+1, p4+2, p4+3);
}
