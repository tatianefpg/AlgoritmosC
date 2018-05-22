#include<math.h>
#include<stdio.h>

int main (void)
{

    int numero,zero,um;
    
    printf("Digite um numero: \n");
    scanf("%i",&numero);
    
    zero=numero%2;
    
    if (zero==0){
        printf("Seu numero e par.");
    }
    else{
        printf("Seu numero e impar");
    }
    
}
