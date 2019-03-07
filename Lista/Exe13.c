#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,soma,z;
    soma = 0;

    for (i=0;i<=19;i++){
        printf("Numero %d: ",i+1);
        scanf("%d",&x);
        z = x*x;
        if (z<=225){
            soma = soma + x;
        }
    }
        printf("Resultado: %d",soma);
    return 0;
}
