#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char word[50];
    int tam,i;
    printf("Digite o nome: ");
    gets(word);
    tam = strlen (word);

    for (i=tam;i>=0;i=i-1){
        if (word[i] == 'a'){
                word[i] = 'x';
            }
        if (word[i] == 'e'){
                word[i] = 'y';
            }
        if (word[i] == 'i'){
                word[i] = 'w';
        }
        if (word[i] == 'o'){
                word[i] = 'k';
        }
        if (word[i] == 'u'){
                word[i] = 'z';
        }
    }
        printf("%s",word);
    return 0;
}
