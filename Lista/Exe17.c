#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, idade,cont1,cont2,cont3,cont4;
    float peso, media1,media2,media3,media4,soma1,soma2,soma3,soma4;
    soma1=0; soma2 = 0; soma3=0; soma4=0;
    cont1 = 0; cont2=0; cont3= 0; cont4=0;
    for (i=0;i<=19;i++){
        printf("\nDigite sua idade: ");
        scanf("%d",&idade);
        printf("Digite seu peso: ");
        scanf("%f",&peso);

        if(1<=idade&&idade<=10){
            soma1 = soma1 + peso;
            cont1 = cont1 + 1;
        }
            if (11<=idade&&idade<=20){
                soma2 = soma2 + peso;
                cont2 = cont2+1;
            }
                if (21<=idade&&idade<=30){
                        soma3 = soma3+peso;
                        cont3= cont3+1;
                    }
                    if(idade>30){
                            soma4 = soma4 + peso;
                            cont4 = cont4+1;
                        }
        }
                      media1 = soma1/cont1;
                      media4= soma4/cont2;
                      media3= soma3/cont3;
                      media2 = soma2/cont4;

                printf("A media de peso da faixa etaria de 1 a 10 anos eh de: %.2f\n",media1);
                printf("\nA media de peso da faixa etaria de 11 a 20 anos eh de: %.2f\n",media2);
                printf("\nA media de peso da faixa etaria de 21 a 30 anos eh de: %.1f\n",media3);
                printf("\nA media de peso da faixa etaria acima de 30 anos eh de: %.1f",media4);



    return 0;
}
