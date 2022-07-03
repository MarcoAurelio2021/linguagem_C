#include <stdio.h>
#include <math.h> /*Fornece um conjunto de funções para operações matemáticas, tais como funções trigonométricas, 
hiperbólicas, logaritmos, potência e arredondamentos.*/

#include <stdlib.h>
#include <string.h> 
#include <locale.h> //necessário para usar setlocale(LC_ALL, "")

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3, num4, num5, maior, menor;
	
	
	printf("Informe o primeiro valor:");
	scanf ("%d", &num1);
	printf("Informe o primeiro valor:");
	scanf ("%d", &num2);
	printf("Informe o primeiro valor:");
	scanf ("%d", &num3);
	printf("Informe o primeiro valor:");
	scanf ("%d", &num4);
	printf("Informe o primeiro valor:");
	scanf ("%d", &num5);
	
	if(num1 > num2) {
		maior = num1;
		menor = num2;
    } 
    else{
    	maior = num2;
    	menor = num1;
	}
	
    if (num3 > maior) {
    	maior = num3;
	}
	else {
		if (num3 < menor) {
			menor = num3;
		}
	}
	
	if (num4 > maior) {
		maior = num4;
	}
	else {
		if (num4 < menor) {
			menor = num4;
		}
	}
	
	if (num5 > maior) {
		maior = num5;
	}
	else {
		if (num5 < menor) {
			menor = num5;
		}
	}
	
    printf ("\nO maior valor é: %d", maior);
    printf ("\nO menor valor é:%d", menor);
    
    return 0;
    
    // deu certo de primeira
}


	
	