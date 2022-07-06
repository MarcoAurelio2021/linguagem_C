#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int dividendo, divisor, quociente, resto;
    
    printf("Informe o numero dividendo:\n");
    scanf("%d", &dividendo);
    printf("Informe o numero divisor:\n");
    scanf("%d", &divisor );

    quociente = dividendo / divisor;

    resto = dividendo % divisor;

    printf("\nO quocioente e: %.d", quociente);
    printf("\nO resto e: %d", resto);

    return 0;
}