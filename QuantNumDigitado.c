#include<stdio.h>
#include<math.h>

int main(void){
    	
    int num,cont=0;
    
    printf("Para encerrar digite: 0 \n");
    printf("Digite um numero: \n");
    scanf("%i",&num);
    
	while(num!=0){
    	if(100<num&&num<200){
            cont++;
    	}
    	else{
    		printf("Digite um numero: \n");
        	scanf("%i",&num);
		}
	}
    printf("Foram digitados %i numeros.",cont);
}
