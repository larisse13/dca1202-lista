/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */

/*
18. Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
 outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
 se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os
 elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A
 função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.


[RESPOSTA]

*/

#include <stdio.h>

void soma(int *v1, int *v2, int *v3, int n){
   int i;

   for(i=0; i<n; i++){
       v3[i]=v1[i]+v2[i];
   }
}

int main()
{
   int *v1, *v2, *v3, n, i;
   printf("Digite a quantidade de elementos do vetor\n");
   scanf("%d", &n);

   v1 = (int*)malloc(n*sizeof(int));
   v2 = (int*)malloc(n*sizeof(int));
   v3 = (int*)malloc(n*sizeof(int));

   printf("Os elementos do primeiro vetor sao:\n");
   for(i=0; i<n; i++){
       scanf("%d", &v1[i]);
   }

   printf("Os elementos do segundo vetor sao:\n");
   for(i=0; i<n; i++){
       scanf("%d", &v2[i]);
   }

   soma(v1,v2,v3,n);

   printf("Os elementos do terceiro vetor sao:\n");
   for(i=0; i<n; i++){
       printf("%d + %d = %d\n", v1[i],v2[i], v3[i]);
   }

   free(v1);
   free(v2);
   free(v3);

   return 0;
}
