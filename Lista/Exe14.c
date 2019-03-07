#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[51];
    int tam;

     printf("Digite um nome: ");
     scanf("%s",&nome);

     tam = strlen(nome);

     printf("O tamanho do nome eh: %d",tam);

    return 0;
}
