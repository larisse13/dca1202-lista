/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */

/*
20. Pesquise na Internet sobre o uso da biblioteca libGC, que implementa
um coletor de lixo em C. O processo de instalação dessa biblioteca em
sistemas Windows pode ser um pouco trabalhoso. Entretanto, em
sistemas Unix, a instalação é bem simples, de sorte que se recomenda a
resolução desta questão em uma máquina, por exemplo, com Linux
instalado. Caso seja usuário Windows e não queira instalar sistemas
alternativos em seu computador, use uma ferramenta de virtualização
(ex: VirtualBox) para instalar e executar o Linux sem alterar a
instalação original de seu computador. Prepare um pequeno
programa-exemplo demonstrando como usar a biblioteca.


#include "gc.h"
#include <assert.h>
#include <stdio.h>

int main()
{
  int i;

  GC_INIT();
  for (i = 0; i < 10000000; ++i)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
     if (i % 100000 == 0)
       printf("Tamanho = %d\n", GC_get_heap_size());
   }
  return 0;
}