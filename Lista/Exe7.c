#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,x,y;

    printf("Entre somente com numeros INTEIROS\n");

      for (i=0;i<=9;i++){
        printf("\nNumero %d: ",i+1);
        scanf("%d",&x);
        y = x*x;
        printf("O quadrado do numero %d eh %d \n",x,y);
   }
        return 0;
}
