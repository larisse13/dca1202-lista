/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 4. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?

[RESPOSTA]

p = i;
Ilegal, pois p eh ponteiro e deveria receber o endereço de i (&i).

q = &j;
Legal, pois q eh ponteiro e está recebendo o endereço de j.

p = &*&i;
Legal, pois o ponteiro p está recebendo um endereço.

i = (*&)j;
Ilegal, pois (*&) é uma a expressã insolúvel.

i = *&j;
Legal, pois o inteiro i está recebendo o valor de j.

i = *&*&j;
Legal, pois o inteiro i está recebendo o valor de j.

q = *p;
Ilegal, pois q eh ponteiro e está recebendo um valor.

i = (*p)++ + *q;
Legal, pois o inteiro i está recebendo um valor.

*/