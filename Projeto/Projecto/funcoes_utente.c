#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "funcoes_auxiliares.h"
#include "funcao_menu.h"


void adicionarUtente(tipoUtente vetorUtentes[],int *contadorUtentes)
{
    int aux=-1,i,codigo,opcaoUtente;
    char stringData[9];

    if(*contadorUtentes<MAX_UTENTES)
    {
        do
        {

            codigo=lerInteiro("\nInsira o codigo do Novo Utente:",MIN_CODUTENTE,MAX_UTENTES);
            aux=procurarInteiroUtente(vetorUtentes,*contadorUtentes,codigo);

            if (aux!=-1)
            {
                printf("\nEsse codigo ja existe!");
            }
        }
        while (aux!=-1);
        vetorUtentes[*contadorUtentes].utenteCod=codigo;


        lerString("\nInsira o primeiro e ultimo nome:",vetorUtentes[*contadorUtentes].utenteNome,MAX_STRING);
        vetorUtentes[*contadorUtentes].utenteTelefone=lerInteiro("Insira o Numero telemovel",900000000,999999999);


        opcaoUtente=menuTipoUtente();

        switch (opcaoUtente)
        {
        case 1:
            strcpy(vetorUtentes[*contadorUtentes].utenteTipo,"Estudante");
            break;
        case 2:
            strcpy(vetorUtentes[*contadorUtentes].utenteTipo,"Docente");
            break;
        case 3:
            strcpy(vetorUtentes[*contadorUtentes].utenteTipo,"Tecnico Admistrativo");
            break;
        case 4:
            strcpy(vetorUtentes[*contadorUtentes].utenteTipo,"Convidado");
            break;
        }

        (*contadorUtentes)++;
    }
    else
    {
        printf("\nJa existe o numero máximo de Utentes!");
    }

    //printf("data!  %s",stringData);

}

void consultarUtente(tipoUtente vetorUtentes[],int contadorUtentes)
{
    int i, posicao=-1, codigo;

            codigo=lerInteiro("\nInsira o codigo do Novo Utente:",MIN_CODUTENTE,MAX_UTENTES);
            posicao=procurarInteiroUtente(vetorUtentes,contadorUtentes,codigo);

            if(posicao==-1)
            {
                printf("\nEssa Codigo de aluno nao existe!");
            }
            else
            {
                printf("[%d] %s %d %s",vetorUtentes[posicao].utenteCod,vetorUtentes[posicao].utenteNome,vetorUtentes[posicao].utenteTelefone,vetorUtentes[posicao].utenteTipo);
            }


}
