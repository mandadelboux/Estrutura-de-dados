#include <stdio.h>
#include <stdlib.h>

int main()
{
   int mai,men,i,x;
   mai=0;
   men=999999;

   for (i=0;i<=4;i++){

    printf("Digite um num: ");
    scanf("%d",&x);

    	if (x<men){
        men = x;
    		}else if (x>mai){
        	mai=x;
    		}
   	}
printf("Maior numero eh: %d\n Menor numero eh: %d",mai,men);

    return 0;
}
