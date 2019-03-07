#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int i;
    float x,raiz;

    printf("ENTRE COM UM NUMERO PARA SER CALCULADA A RAIZ\n");
    for (i=0;i<=14;i++){
        printf("\nNum %i: ",i+1);
        scanf("%f",&x);

        raiz = sqrt(x);

        printf("Resl: %.1f\n",raiz);

    }
}
