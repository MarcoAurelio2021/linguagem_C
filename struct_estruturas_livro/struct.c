/* A sintaxe para a declaração em C é:
struct <nome_da_estrutura >
{
    <tipo_de_dado1> <campo1>;
    <tipo_de_dado2> <campo2>;
    ...
    <tipo_de_dadoN> <campoN>;
}; */

#include <stdio.h>

struct produto
{
    int codigo;
    char descricao[50];
    float preco;
    int saldo;
};

int main (){
    struct produto ficha;
    {
      printf("Informe o Código do produto:\n");
      scanf("%d", &ficha.codigo);
      printf("Informe a descrição do produto:\n");
      scanf("%s", ficha.descricao);
      printf("Informe o preço do produto:\n");
      scanf("%f", &ficha.preco);
      printf("Informe o saldo do produto:\n");
      scanf("%d", &ficha.saldo);
    };

    printf("\nCodigo: %d", ficha.codigo);
    printf("\nDescriçaõ: %s", ficha.descricao);
    printf("\nPreço: %.2f", ficha.preco);
    printf("\nSaldo:%d", ficha.saldo);
    
}
