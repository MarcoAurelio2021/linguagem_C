#include <stdio.h>
#include <stdlib.h>


int main() {
    int dividendo, divisor, quo, resto;
    
    printf("Informe o numero dividendo:\n");
    scanf("%d", &dividendo);
    printf("Informe o numero divisor:\n");
    scanf("%d", &divisor );

    quo = dividendo / divisor;

    resto = dividendo % divisor;

    printf("\nQuocioente: %.d", quo);
    printf("\nResto: %d", resto);

    return 0;
}