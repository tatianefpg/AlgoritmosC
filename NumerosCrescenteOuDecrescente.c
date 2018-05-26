#include<math.h>
#include<stdio.h>

int main (void)
{
	int num1,num2,num3,maior,menor,meio,opcao;

    printf("Menu de opcoes:\n");
    printf("Opcao 01: num1, num2, num3 em ordem crescente.\n");
    printf("Opcao 02: num1, num2, num3 em ordem decrescente.\n");
    printf("Opcao 03: O maior ficara entre os dois numeros.\n");
    scanf("%i", &opcao);
    
    if((opcao<1) || (opcao>3)){
    	printf("Opcao invalida");
	}
    else{
        printf("Digite o primeiro numero:\n");
        scanf("%i", &num1);
        printf("Digite o segundo numero:\n");
        scanf("%i", &num2);
        printf("Digite o terceiro numero:\n");
        scanf("%i", &num3);}

    if(num1>num2) {
        if(num2>num3){
            maior=num1; meio=num2; menor=num3;
        }
        else if (num3>num1){
                    maior=num3; meio=num1; menor=num2;
        }
        else {
                maior=num2; meio= num3; menor= num1;
        }
    }
	
}
