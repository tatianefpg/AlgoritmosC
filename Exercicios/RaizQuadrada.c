#include<math.h>
#include<stdio.h>

/* Calcule a raiz quadrada de um numero
*/

int main(void)
{
	// Cria Variavel
    int num;
    float raiz;
    
	//Recebe o numero do usuario
    printf("Digite um numero:\n");
    scanf("%i",&num);
    
    //Verifica se o numero e valido
    if(num>0){
        raiz= sqrt(num);
        printf("A raiz quadrada de %i e:%.2f",num,raiz);
    }
    else{
        ("Numero incorreto! \n Por favor, digite um outro numero.");
    }
}
