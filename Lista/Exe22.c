#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, i, controle=0;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (numero > 1){
        for (i = 1; i <= numero; i++)
        {
            if (numero % i == 0) controle++;
        }
        if (controle == 2)
        {
           printf("O numero %d e um numero primo!\n", numero);
        }
        else
        {
            printf("O numero %d nao e um numero primo!\n", numero);
        }

    }

}
