#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[6] = "Terra";
    int i,tam;

    //printf("Digite: ");
    //scanf("%s",)

    tam = strlen(word);


    for (i=tam;i>=0;i--){
        printf(" %c\n",word[i]);

    }
    return 0;
}
