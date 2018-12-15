#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "funcoes_auxiliares.h"
#include "funcao_menu.h"

void adicionarBike(tipoBike vetorBikes[],int *contadorBikes)
{
    int aux=-1,i,opcaoCampus=0;

    if(*contadorBikes<MAX_BICICLETAS)
    {

        do
        {

            lerString("\nInsira a DESIGNACAO da Bicicleta:",vetorBikes[*contadorBikes].bikeDesignacao,MAX_STRING);
            aux=procurarStringBike(vetorBikes,*contadorBikes,vetorBikes[*contadorBikes].bikeDesignacao);

            if(aux!=-1)
            {
                printf("\nJa EXISTE!");

            }

        }
        while (aux!=-1);
    }
    else
    {
        printf("Ja inseriu o MAXIMO de Bicicletas");
    }

    lerString("\nInsira o MODELO da Bicicleta: ",vetorBikes[*contadorBikes].bikeModelo,MAX_STRING);


    vetorBikes[*contadorBikes].bikeEstado=1;
    vetorBikes[*contadorBikes].bikeKm=0.00;
    vetorBikes[*contadorBikes].bikeEmprestimos=0;

    do
    {
        printf("\nInsira qual o Campus onde se encontra a bicicleta");
        printf("\n\t\t[1]Campus 1");
        printf("\n\t\t[2]Campus 2");
        printf("\n\t\t[3]Campus 5");
        printf("\n\t\t[4]Residencias");
        printf("\n\t\tOpcao:");
        scanf("%d",&opcaoCampus);
        limpaBufferStdin();

        switch (opcaoCampus)
        {
        case 1:
            vetorBikes[*contadorBikes].bikeCampus=opcaoCampus;
            opcaoCampus=-1;
            break;
        case 2:
            vetorBikes[*contadorBikes].bikeCampus=opcaoCampus;
            opcaoCampus=-1;
            break;
        case 3:
            vetorBikes[*contadorBikes].bikeCampus=opcaoCampus;
            opcaoCampus=-1;
            break;
        case 4:
            vetorBikes[*contadorBikes].bikeCampus=opcaoCampus;
            opcaoCampus=-1;
            break;
        default:
            printf("\nOpcao Invalida!!!");
            break;
        }
    }
    while (opcaoCampus!=-1);

    (*contadorBikes)++;
}

void consultarBike(tipoBike vetorBikes[],int contadorBikes)
{
    int i, posicao=-1;
    char opcaoConsultar[MAX_STRING];

    do
    {

        lerString("\nQual a DESIGNACAO da bicicleta:",opcaoConsultar,MAX_STRING);

        posicao=procurarStringBike(vetorBikes,contadorBikes,opcaoConsultar);


        if (posicao==-1)
        {
            printf("\nEssa DESIGNACAO nao existe!");
        }
        else
        {
            printf("\n[%s] %s ",vetorBikes[posicao].bikeDesignacao,vetorBikes[posicao].bikeModelo);

            switch (vetorBikes[posicao].bikeCampus)
            {
            case 1:
                printf("Campus 1 ");
                break;
            case 2:
                printf("Campus 2 ");
                break;
            case 3:
                printf("Campus 5 ");
                break;
            case 4:
                printf("Residencias ");
                break;
            }

            switch (vetorBikes[posicao].bikeEstado)
            {
            case 1:
                printf("Disponivel ");
                break;
            case 2:
                printf("Emprestada ");
                break;
            case 3:
                printf("Avariada ");
                break;
            }

            //printf("%.2fKM",vetorBikes[posicao].bikeKm);

        }

    }
    while (posicao==-1);
}

/*void listarBikes(tipoBike vetorBikes[],int contadoBike)
{





    printf("")





}*/
