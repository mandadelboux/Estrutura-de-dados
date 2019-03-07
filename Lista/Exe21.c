#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    do{

        printf("Digite um numero para o fatorial: ");
        scanf("%d",&x);

            //if (x>1){
                for(i=1;x>1; x=x-1){
                i=i*x;
                }
                printf("%d",i);

    }while(x!=1);
}
