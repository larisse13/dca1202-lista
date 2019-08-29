/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */

/*
19. Crie uma função capaz de realizar multiplicação matricial da forma
. A função deve receber 6 argumentos: os ponteiros para as
matrizes A, B e C, o número de linhas e colunas de A e o número de
colunas de B (assuma que o número de coluna de A é igual ao número
de linhas de B). O resultado da multiplicação deve ficar armazenado
em C. Crie um programa para testar sua implementação, capaz de
utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de
saída de dados no terminal.


[RESPOSTA]

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multi(int **v1, int **v2, int **v3, int x, int y, int z){
   int i,j,k, soma;
   for(i = 0; i < x; i++){
       for(j = 0; j < z; j++){
           v3[i][j] = 0;
           soma = 0;
           for(k=0; k< y; k++){
               soma = soma + v1[i][k]*v2[k][j];
           }
               v3[i][j] = soma;
         }
    }
}


int main()
{
   int **v1, **v2, **v3, n, m, o, i, j;
   printf("Digite a quantidade de linhas e colunas da matriz A\n");
   scanf("%d\n%d", &m, &n);
   printf("Digite a quantidade de colunas da matriz B\n");
   scanf("%d", &o);

   v1 = (int**)malloc(m*sizeof(int));
   v2 = (int**)malloc(n*sizeof(int));
   v3 = (int**)malloc(o*sizeof(int));

   for(i=0; i<m; i++){
       v1[i]=(int*) malloc(n*sizeof(int));
   }
   for(i=0; i<n; i++){
       v2[i]=(int*) malloc(o*sizeof(int));
   }
   for(i=0; i<m; i++){
       v3[i]=(int*) malloc(o*sizeof(int));
   }

   srand(time(0));

   for(i=0; i<m; i++){
       for(j=0; j<n; j++){
         v1[i][j] = rand()%10;
       }
    }

   for(i=0; i<n; i++){
       for(j=0; j<o; j++){
         v2[i][j] = rand()%10;
       }
    }
   multi(v1,v2,v3,m,n,o);

   printf("\nMatriz C\n");
   for(i=0; i<m; i++){
       for(j=0; j<n; j++){
           printf("%d\t", v3[i][j]);
       }
       printf("\n");
   }

   for (i=0;i<m;i++) {
       free(v1[i]);
   }
   for (i=0;i<n;i++) {
       free(v2[i]);
   }
   for (i=0;i<o;i++) {
       free(v3[i]);
   }

   free(v1);
   free(v2);
   free(v3);

   return 0;
}
