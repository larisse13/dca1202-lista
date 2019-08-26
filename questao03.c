/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 3. Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.

int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,p+2,&p,3p,*&p+4);
}

[RESPOSTA]

a) %x irá imprimir o valor hexadecimal referente ao endereço de memória 4094

b) O segundo elemento será referente à operação:
*p + 2 = *&i + 2 = 5 + 2 = 7
Logo, o valor resultante será 7


c) O terceiro elemento imprimirá o valor correspondente a:
**&p = *&i = que neste caso, será igual a 5

d) O quarto elemento resultará da operação:
3*p = 3*&i = 3*5 = realizando os cálculos, temos o que o valor final será 15

e) Por fim, o último valor será:
**&p + 4 = *&i + 4 = 5 + 4 = resultando em 9

*/

