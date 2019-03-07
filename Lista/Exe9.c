#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float pol = 2.54, x;
    printf("Polegada     CM\n");
    for (i=1; i<=20;i++){
            x = i*pol;

            printf("%d          %.2f\n",i,x);
    }

    return 0;
}
