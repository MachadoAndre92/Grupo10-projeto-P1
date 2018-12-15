#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "funcoes_auxiliares.h"
#include "funcao_menu.h"


void adicionarUtente(tipoUtente vetorUtentes[],int *contadorUtentes)
{
    int aux=-1,i,codigo;
    char stringData[9];

    if(*contadorUtentes<MAX_UTENTES)
    {
        do
    {

        codigo=lerInteiro("\nInsira o codigo do Novo Utente:",MIN_CodUTENTE,MAX_STRING);
        aux=procurarInteiroUtente(vetorUtentes,*contadorUtentes,codigo);

        if (aux!=-1)
        {
            printf("\nEsse codigo já exite!");
        }
    }
    while (aux!=-1);
    }
    else
    {
        printf("\nJá existe o numero máximo de Utentes!");
    }



    //printf("data!  %s",stringData);

}
