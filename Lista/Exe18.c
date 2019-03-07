#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite numero negativo para parar\n");
	
    do {
        printf("Digite um numero: ");
        scanf("%d",&x);

    }while(x>=0);
   	return 0;
}
