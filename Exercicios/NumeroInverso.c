#include<math.h>
#include<stdio.h>

/*
* Dado um numero imprima o seu inverso
*/

int main(void)
{    
    int numero,quadrado;
    float inverso;
    
    printf("Digite um numero: \n");
    scanf("%i", &numero);
    
    if (numero>0){
        inverso=1./numero;
        printf("O inverso de %i e = %.0f", numero,inverso);
    }
    else{
        quadrado=pow(numero,2);
        printf("O quadrado de %i e = %i", numero,quadrado);
    }

}
