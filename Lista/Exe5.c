#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,soma;
    soma=0;
    for(i=1;i<=100;i++){
        //i = i+1;
        soma= soma+i;
    }
    //printf("\n%d\n",i*50);
    printf("%d",soma);
return 0;
}