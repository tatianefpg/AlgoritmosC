#include<stdio.h>
#include<math.h>

int main(void){
    	
    int k=0, num,triplo;
    
    printf("qual o numero: ");
    scanf("%i", &num);
    
    while(num!=0){
        triplo=3*num;
        
		printf("O triplo do numero e: %i \n", triplo);
        printf("\n\nQual o numero: ");
        scanf("%i",&num);
	}
}
