/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 2.  Seja o seguinte trecho de programa:

int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
Determine o valor das seguintes expressões:

[RESPOSTA]

p == &i;
a) A verificação é verdadeira, logo o resultado é 1.

*p - *q;
b) *p - *q = *&i - *&j = 3 - 5 = -2

**&p;
c) **&p = *&i = 3

3 - *p/(*q) + 7;
d) 3 - *p/(*q) + 7 = 3 - *&i/(*&j) + 7 = 3 - 3/5 + 7 = 
3 - 0 (como ambas as variáveis são do tipo inteiro, o resultado da divisão nesse caso será 0) + 7 = 10

*/

