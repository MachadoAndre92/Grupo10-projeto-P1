#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "funcoes_auxiliares.h"
#include "funcao_menu.h"

void adicionarBike(tipoBike vetorBikes[],int* contadorBikes)
{
    int aux=-1,i;
    char str1[MAX_STRING];


    if(*contadorBikes<MAX_BICICLETAS)
    {

        do
        {
            lerString("\nInsira o CODIGO da Bicicleta:",str1,MAX_STRING);
            aux=procurarString(vetorBikes,*contadorBikes,str1);

            if(aux!=-1)
            {
                printf("\nJa EXISTE!");
            }

        }
        while (aux=!-1);
    }
    else
    {
        printf("Ja inseriu o MAXIMO de Bicicletas");
    }


    lerString("Insira o MODELO da bicicleta:",vetorBikes[*contadorBikes].modelo,MAX_STRING);

    printf("\n%s",vetorBikes[*contadorBikes].modelo);

    vetorBikes[*contadorBikes].bikeEstado=1;









}
