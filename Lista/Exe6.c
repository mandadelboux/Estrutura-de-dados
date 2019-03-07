#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int i;
   float y,x;

        printf("Entre somente com numeros INTEIROS");

      for (i=0;i<=9;i++){

        printf("\nNumero %d: ",i+1);
        scanf("%f",&x);

        y = x/2;

        printf("Metade do numero %.0f eh %.2f\n",x,y);
   }

}