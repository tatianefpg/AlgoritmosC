#include<math.h>
#include<stdio.h>

int main (void)
{
    char nome[20];
    int idade;
    float peso;
    printf("Digite seu primeiro nome: \n");
    gets(nome);
    printf("Digite sua idade:\n");
    scanf("%i",&idade);
    printf("Digite seu peso:\n");
    scanf("%f",&peso);
    if (peso >50 && idade >18 && idade < 60){
        printf("Doa Sangue");
    }
    else {
        printf("Nao doa sangue");
    }
}
