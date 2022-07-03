#include <stdio.h>

int main(){
    int cod_Estado, peso, cod_Carga;
    float imposto, taxa_imp, preco, preco_quilo;
    float total;

    printf("Digite o código do Estado:\n");
    scanf("%d", &cod_Estado);

    printf("Digite o peso da carga em toneladas:\n");
    scanf("%d", &cod_Carga);

    printf("Digite o código da carga: \n");
    scanf("%d", &cod_Carga);

    switch (cod_Estado)
    {
    case 1:
        taxa_imp = 0.2;
        break;

    case 2:
        taxa_imp = 0.15;
        break;

    case 3:
        taxa_imp = 0.1;
        break;

    case 4:
        taxa_imp = 0.05;
        break;
    
    default: 
        taxa_imp = 0;
        printf("\nCódigo de estado inválido:");
        break;
    }

    if (cod_Carga >= 10 && cod_Carga <= 20)
    {
        preco_quilo = 180;
    }
    else if (cod_Carga >= 21 && cod_Carga <= 30)
    {
        preco_quilo = 120;
    }
    else if (cod_Carga >= 31 && cod_Carga <= 40)
    {
        preco_quilo = 230;
    }
    else
    {
        printf("\nCódigo de carga inválido\n");
        preco_quilo = 0;
    }

    imposto = peso * 1000 * preco_quilo * taxa_imp;
    preco = peso * 1000 * preco_quilo;
    total = preco + imposto;

    printf("\nPeso em kg: %d \nPreco: %.2f\nImposto: %.2f\nTotal: %.2f\n", peso*1000, preco, imposto, total);

}