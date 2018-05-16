/*
* Distância entre dois pontos qualquer
*/
#include<math.h>
#include<stdio.h>

int main ()
{
	//Váriáveis
    float x1,x2,y1,y2,distancia=0;
    
    //Recebe os pontos
    printf("Qual o valor de x'  =");         scanf("%f",&x1);
    printf("Qual o valor de x'' =");         scanf("%f",&x2);
    printf("Qual o valor de y'  =");         scanf("%f",&y1);
    printf("Qual o valor de y'' =");         scanf("%f",&y2);
    
    //Calcula a distancia entre dois pontos
    distancia = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    
    //Imprime a distania entre dois pontos
    printf("\n A distancia final e = %.2f \n\n",distancia);
}
