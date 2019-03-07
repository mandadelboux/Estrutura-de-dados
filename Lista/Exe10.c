#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min,max,i;
    float c;

    printf("CONVERSAO FAHRENHEIT PARA CELSIUS\n");
    printf("\nDIGITE NUMEROS INTEIROS PARA DEFINICAO DE LIMITES\n");

    printf("Defina o Limite MINIMO: ");
    scanf("%d",&min);
    printf("\nDefina o Limite MAXIMO: \n");
    scanf("%d",&max);

    printf("FAHRENHEIT      CELSIUS");

    for (i=min;i<=max;i++){

        c = (i-32)*0.55;


        printf("\n%d      %.2f\n",i,c);
    }

    return 0;
}
