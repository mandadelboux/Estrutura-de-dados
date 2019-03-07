#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, men, mai,x;

    printf("DIGITE 0 PARA FINALIZAR O PROGRAMA\n");
    i = 0;
    men = 9999999;
    mai = 0;
    do{
         i = i+1;
         printf("Digite um numero: ");
         scanf("%d",&x);

            if (x<men&&x>0){
                men = x;
            }else if (x>mai){
                mai=x;
            }

    }while (x!=0);

    printf("Foram digitados %d numeros\n",i-1);
    printf("O menor numero digitado foi: %d\n O maior numero digitado foi: %d",men,mai);

    return 0;
}
