#include <stdio.h>
#include <math.h> /*Fornece um conjunto de funções para operações matemáticas, tais como funções trigonométricas, 
hiperbólicas, logaritmos, potência e arredondamentos.*/

#include <stdlib.h>
#include <string.h> 
#include <locale.h> //necessário para usar setlocale(LC_ALL, "")

int main() {
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("Informe um número:");
	scanf("%d", &num);
	
	if ((num %3) == 0) {
		printf ("O número %d é divisível por 3. \n", num);
	}
	else {
         printf("O número %d não é divisível por 3.\n", num);
	}
	
	if ((num % 7) == 0) {
		printf ("O número %d é divisível por 7."), num;
	}
	else {
		printf("O número %d não é divisível por 7.", num);
	}
	
	return 0;
}



	


	