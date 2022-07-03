#include <stdio.h>
#include <math.h> /*Fornece um conjunto de funções para operações matemáticas, tais como funções trigonométricas, 
hiperbólicas, logaritmos, potência e arredondamentos.*/
#include <stdlib.h>
#include <string.h> 
#include <locale.h> //necessário para usar setlocale(LC_ALL, "")

int main (){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf ("Escolha um Número de 1 a 12:");
	scanf ("%d", &num);
	
	switch(num){
	case 1 :
		printf("Janeiro");
		break;
		
		case 2 :
		printf("Fevereiro");
		break;
		
		case 3 :
		printf("Março");
		break;
		
		case 4 :
		printf("Abril");
		break;
		
		case 5 :
		printf("Maio");
		break;
		
		case 6 :
		printf("Junho");
		break;
		
		case 7 :
		printf("Julho");
		break;
		
		case 8 :
		printf("Agosto");
		break;
		
		case 9 :
		printf("Setembro");
		break;
		
		case 10 :
		printf("Outubro");
		break;
		
		case 11 :
		printf("Novembro");
		break;
		
		case 12 :
		printf("Dezembro");
		break;
		
   	default:
   		printf("Valor inválido");
	}
	
	return 0;
	
}

		
