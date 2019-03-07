#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    i = 0;
    printf("DIGITE 0 PARA PARAR\n");
    do{
        printf("Digite um numero; ");
        scanf("%d",&x);
        if(100<x && x<200){
            i = i+1;
        }
    }while(x!=0);

    printf("A quantidade de nuemeros inseridos foi: %d",i);
    return 0;
}
