#include<math.h>
#include<stdio.h>

/*
* Dado um numero imprima a metade do numero
*/

int main (void)
{
    int numero;
    float metade;
    
    printf("Digite um numero: \n");
    scanf("%i", &numero);
    
    if (numero>20)
    {
        metade=numero/2.;
        printf("A metade do numero e: %.2f", metade);
    }
    
}
