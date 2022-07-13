/* Para podermos criar uma lista de produtos, podemos usar uma struct com vetor*/

#include <stdio.h>

struct produto
{
    int codigo;
    char descricao[50];
    float preco;
    int saldo;
};

int main(){
    struct produto ficha[10];
    int i;

    for (i=0; i < 10; i++) 
    {
      printf("Digite o código do produto:\n");
      scanf("%d", &ficha[i].codigo);
      printf("Digite a descrição do produto:\n");
      scanf("%s", ficha[i].descricao);
      printf("Digite o valor do produto:\n");
      scanf("%f", &ficha[i].preco);
      printf("Digite o saldo do produto:\n");
      scanf("%d", &ficha[i].saldo);
    }


    for (i=0; i < 10; i++) 
    {
      printf("\nProduto %d\n", i+1);
      printf("\nCódigo:%d", ficha[i].codigo);
      printf("\nDescrição: %s\n", ficha[i].descricao);
      
      printf("\nValor:%.2f\n", ficha[i].preco);
      
      printf("\nSaldo:%d\n", ficha[i].saldo);
    }

    return (0);
}