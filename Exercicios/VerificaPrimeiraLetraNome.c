#include<math.h>
#include<stdio.h>

/*
* Verifica a primeira letra do nome
*/

int main (void)
{
	char nome[20];

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);
    
    if (nome[0]=='A')
    {
        printf("Seu nome comeca com a letra A");
    }
    
}
