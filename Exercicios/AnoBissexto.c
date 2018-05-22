#include<math.h>
#include<stdio.h>

/*
* Verifique se um ano e bissexto ou não e informe ao usuario
*/

int main(void)
    {
    float num;
    int k=1900;
    printf("Informe um numero: \n");    scanf("%f", &num);
    for (k=0; k<4;k++){
        (num%4=0)
            printf(" %.0f e ano bissexto \n\n", num);
    }
        else{
        printf(" %.0f não e ano bissexto !", num);

    }
    }
