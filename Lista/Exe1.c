#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    x=1;
    for(i=0;i<=4;i++){
        printf("\nNum %d: ",i+1);
        scanf("%d",&x);
        x = x*x;
        printf("\n%d numero digitado: %d\n",i+1,x);

    }
    return 0;
}
