/* --------------------------------------------------------------------------------------- */
/*                  [DCA1202] PROGRAMAÇÃO AVANÇADA - LISTA 01 - PONTEIROS                  */
/* --------------------------------------------------------------------------------------- */


/* 12. Suponha que as seguintes declarações tenham sido realizadas:

    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

Identifique quais dos seguintes comandos é válido ou inválido:

[RESPOSTA]

aloha[2] = value;
a) Válido, pois um valor do tipo float está sendo atribuído a uma posição de um vetor também do tipo float.

scanf("%f", &aloha);
b) Válido, pois o scanf está lendo uma variável do tipo float, que será armazenada no endereço do primeiro índice do vetor aloha.

aloha = value";
c) Inválido, devido as aspas no final e para atribuir valor a uma posição no vetor eh preciso informar a posição.

printf("%f", aloha);
d) Válido, pois o printf está imprimindo a primeira posição do vetor do tipo float.

coisas[4][4] = aloha[3];
e) Válido, o valor float da quarta posição do vetor está sendo atribuido a posição [4][4] da matriz também float.

coisas[5] = aloha;
f) Inválido, pois a variável coisas é uma matriz e precisa de dois parametros.

pf = value;
g) Inválido, pois o ponteiro está recebendo um valor.

pf = aloha;
h) Válido, pois o ponteiro está recebendo um endereço.

*/
