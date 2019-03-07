#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int i;
   float raiz,x;

   for (i=0;i<=9;i++){
        printf("\nDigite um numero: ");
        scanf("%f",&x);
        raiz = sqrt(x);
        printf("A raiz eh: %.1f\n",raiz);

            if (x<0){
                printf("DIGITE APENAS NUMEROS POSITIVOS\n"); system("PAUSE");
            }
            continue;
   }
    return 0;
}





