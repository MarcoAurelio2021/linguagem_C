#include <stdio.h>
#include <math.h>



int main() {
  
    int cargo;
    float salario,aumento,total;
    printf("1- Servente, 2- Pedreiro 3- Mestre de Obra, 4- Tecnico de segurança\n");
    printf("Informe um Codigo de 1 a 4:");
    scanf("%d", &cargo);
    printf("Informe o Valor do Salario:");
    scanf("%f", &salario);

    switch (cargo)
    {
    case 1:
        aumento =  salario * 40/100;
        total = salario + aumento;
        printf("Servente, o  valor do aumento foi de %.2f e o salário total e %.2f ", aumento, total);
        break;
    
    case 2:
        aumento =  salario * 35/100;
        total = salario + aumento;
        printf("Pedreiro, o  valor do aumento foi de %.2f e o salario total e %.2f ", aumento, total);
        break;

    case 3:
         aumento =  salario * 20/100;
         total = salario + aumento;
        printf(" Mestre de obra, o  valor do aumento foi de %.2f e o salario total e %.2f ", aumento, total);
        break;

    case 4:
         aumento =  salario * 40/100;
         total = salario + aumento;
         printf("Tecnico de segurança, o  valor do aumento foi de %.2f e o salário total é %.2f ", aumento, total);
        break;
    
    default: printf("Valor inválido");
    break;

    return 0;
    }
}
