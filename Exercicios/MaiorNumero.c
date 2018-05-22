#include<math.h>
#include<stdio.h>

/*
* Dado dois números imprima o maior
*/

int main (void)
{
    int a,b,maior;
    
    printf("Digite um valor para a variavel A:\n");
    scanf("%i", &a);
    printf("Digite um valor para a variavel B:\n");
    scanf("%i", &b);
    
    maior=a;
    
    if (b>a)
    {
        maior=b;
    }
    printf("O maior numero e: %i",maior);
    
}
