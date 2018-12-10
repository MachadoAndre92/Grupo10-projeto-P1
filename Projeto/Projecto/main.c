#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "constantes.h"
#include "funcoes_auxiliares.h"
#include "structs.h"

int main()
{
    int opcaoUtente,contadorBikes=0,i;
    char opcao,subOpcao;
    char descricaoUtente[25];
    tipoBike vetorBikes[MAX_BICICLETAS];


    opcaoUtente=menuUtente();

    switch (opcaoUtente)
    {
    case 1:
        strcpy(descricaoUtente,"Estudante");
        break;
    case 2:
        strcpy(descricaoUtente,"Docente");
        break;
    case 3:
        strcpy(descricaoUtente,"Tecnico Admistrativo");
        break;
    case 4:
        strcpy(descricaoUtente,"Convidado");
        break;
    }


    do
    {

        opcao=menu(descricaoUtente,opcaoUtente);

        switch (opcao)
        {
        case 'B':

            do
            {
                subOpcao=menuBike(descricaoUtente,opcaoUtente);
                switch (subOpcao)
                {
                case 'A':

                        adicionarBike(vetorBikes,&contadorBikes);

                    break;

                case 'V':
                    break;
                default:
                    printf("Escolha uma opcao Valida!MENU BICICLETAS ");
                    break;
                }
            }
            while (subOpcao!='V');
            break;


        case 'S':
            break;
        default:
            printf("Escolha uma opcao Valida!(MENU PRINCIPAL");
            break;
        }
    }
    while (opcao!='S');

    for(i = 0; i < contadorBikes; i++) {
        free(vetorBikes[i].modelo);
    }


    return 0;
}
