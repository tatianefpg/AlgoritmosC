#include<stdio.h>
#include<math.h>

int main(void){
    	
    int k=0;
    float area,base,alt;
    
    while(base<=0){
    	printf("Qual a base do triangulo:\n");
    	scanf("%f",&base);
	}
	
	while(alt<=0){
    	printf("Qual a altura do triangulo:\n");
    	scanf("%f",&alt);
	}
    
	area=base*alt/2;
    
	printf("A area do triangulo e :%.2f",area);
}
