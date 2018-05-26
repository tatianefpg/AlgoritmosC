#include<math.h>
#include<stdio.h>

int main (void) {
    
	int num1,num2,num3,maior;
    
    printf("Digite o primeiro numero:\n");
    scanf("%i", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%i", &num2);
    printf("Digite o terceiro numero:\n");
    scanf("%i", &num3);
    
    if(num1>num2){
        if(num1>num3){
            maior=num1;
            printf("O maior numero e o primeiro numero: %i",maior);
        }
        else  if (num3>num1){
                maior=num3;
                printf("O maior numero e o terceiro numero: %i",maior);
        }
        else {
            num2>num1;
            maior=num2;
            printf("O maior numero e o segundo numero:%i",maior);
        }
    }
    else  if(num3>num2){
        	maior=num3;
        	printf("O maior numero e o terceiro numero: %i",maior);
    }
    else {
        num2>num3;
        maior=num2;
        printf("O maior numero e o segundo numero:%i",maior);
	}

}

