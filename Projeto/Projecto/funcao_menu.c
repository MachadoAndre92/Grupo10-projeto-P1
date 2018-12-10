#include <stdio.h>
#include <ctype.h>

#include "funcoes_auxiliares.h"
#include "funcao_menu.h"

int menuUtente()
{
    int opcao;

    printf("\nEscolha o tipo de Utente");
    printf("\n[1]Estudante");
    printf("\n[2]Docente");
    printf("\n[3]Tecnico Admistrativo");
    printf("\n[4]Convidado");

    opcao=lerInteiro("\nEscolha uma Opcao:",1,4);

    return opcao;

}


char menu(char descricaoUtente[],int opcaoUtente)
{

    char opcao;

    printf("\n*****************************MENU PRINCIPAL******************************************\n");
    printf("%s\n",descricaoUtente);

    printf("[B]icicletas\n");


    printf("[S]air\n");
    printf("opcao:");
    opcao=getchar();
    limpaBufferStdin();

    opcao=toupper(opcao);



    return opcao;

}

char menuBike(char descricaoUtente[],int opcaoUtente)
{
    char opcao;

    printf("\n*****************************MENU BICICLETAS******************************************\n");
    printf("%s\n",descricaoUtente);

    printf("[A]dicionar Bicicleta\n");
    printf("[V]oltar\n");
    printf("opcao:");


    opcao=getchar();
    limpaBufferStdin();

    opcao=toupper(opcao);

    return opcao;


}













