#include<math.h>
#include<stdio.h>

int main (void)
{

    int num1,num2;
    float num3;
    char opcao;
    printf("Menu de opcoes:\n");
    printf("Opcao A: somar dois numeros\n");
    printf("Opcao B: raiz quadrada de um numero\n");
    printf("Digite a opcao desejada: opcao A ou opcao B:\n  ");
    scanf("%s",&opcao);
    if(opcao=='A'){
        printf("Digite um numero: \n");
        scanf("%i",&num1);
        
        
        printf("Digite outro numero:\n");
        scanf("%i",&num2);
        printf("A soma dos numeros e:%i",num1+num2);
    }
    else{if(opcao=='B'){
        printf("Digite um numero:\n");
        scanf("%f",&num3);
        printf("A raiz quadrada de %.0f e:%.2f",num3,sqrt(num3));
    }
    else {
        printf("Esta opcao nao esta disponivel");
    }


}

}
