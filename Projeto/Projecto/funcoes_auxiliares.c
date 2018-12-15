#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "constantes.h"
#include "funcoes_auxiliares.h"
#include "structs.h"

//Procura e compara Strings!
int procurarStringBike(tipoBike vetorBikes[],int contadorBikes,char str1[])
{

    int posicao=-1,i;
    for(i=0; i<contadorBikes; i++)
            {

                if(strcmp(vetorBikes[i].bikeDesignacao,str1)==0)
                {
                    posicao=i;
                    i=contadorBikes;
                }

            }

    return posicao;
}

int procurarInteiroUtente(tipoUtente vetorUtentes[],int contadorUtentes,int auxiliar)
{

    int posicao=-1,i;
    for(i=0; i<contadorUtentes; i++)
            {
                if(vetorUtentes[i].utenteCod==auxiliar)
                {
                    posicao=i;
                    i=contadorUtentes;
                }

            }

    return posicao;
}




// Acrescentada variavel controlo para repetir insercao se ao for inserido numero int
int lerInteiro(char mensagem[MAX_STRING], int minimo, int maximo)
{
    int numero, controlo;
    do
    {
        printf("%s :", mensagem);
        controlo = scanf ("%d", &numero);  // scanf devolve quantidade de valores vàlidos obtidos
        limpaBufferStdin();     //limpa todos os caracteres do buffer stdin (nomeadamente o \n)

        if (controlo == 0)
        {
            printf("Devera inserir um numero inteiro \n");
        }
        else
        {

            if(numero<minimo || numero>maximo)
            {
                printf("Numero invalido. Insira novamente:\n");
            }

        }
    }
    while(numero<minimo || numero>maximo || controlo ==0);

    return numero;
}


float lerFloat(char mensagem[MAX_STRING], float minimo, float maximo)
{
    float numero;
    int controlo;
    do
    {
        printf("%s (%.2f a %.2f) :", mensagem, minimo, maximo);
        controlo = scanf ("%f", &numero);  // scanf devolve quantidade de valores vàlidos obtidos
        limpaBufferStdin();

        if (controlo == 0)
        {
            printf("Devera inserir um numero decimal (float) \n");
        }
        else
        {

            if(numero<minimo || numero>maximo)
            {
                printf("Numero invalido. Insira novamente:\n");
            }

        }
    }
    while(numero<minimo || numero>maximo || controlo ==0);

    return numero;
}


void lerString(char mensagem[MAX_STRING], char vetorCaracteres[MAX_STRING], int maximoCaracteres)
{
    int tamanhoString;

    do 			// Repete leitura caso sejam obtidas strings vazias
    {
        //   puts(mensagem);
        printf("%s", mensagem);
        fgets(vetorCaracteres, maximoCaracteres, stdin);

        tamanhoString = strlen(vetorCaracteres);

        if(vetorCaracteres[tamanhoString-1] != '\n')  // ficaram caracteres no buffer....
        {
            limpaBufferStdin();  // apenas faz sentido limpar buffer se a ficarem caracteres
        }
        else
        {
            vetorCaracteres[tamanhoString-1] ='\0';          //substitui \n da string armazenada em vetor por \0
        }
        if (tamanhoString == 1)
        {
            printf("Nao foram introduzidos caracteres!!! . apenas carregou no ENTER \n\n");  // apenas faz sentido limpar buffer se a ficarem caracteres
        }

    }
    while (tamanhoString == 1);
}


tipoData lerData()
{
    tipoData data;
    int maxDiasMes;

    data.ano = lerInteiro(" ano", 2014, 2018);
    data.mes = lerInteiro(" mes", 1, 12);

    switch (data.mes)
    {
    case 2:
        if ((data.ano % 400 == 0) || (data.ano % 4 == 0 && data.ano % 100 != 0))
        {
            maxDiasMes = 29;
        }
        else
        {
            maxDiasMes = 28;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        maxDiasMes = 30;
        break;
    default:
        maxDiasMes = 31;
    }

    data.dia = lerInteiro(" dia:", 1, maxDiasMes);


    return data;
}



void limpaBufferStdin(void)
{
    int chr;
    do
    {
        chr = getchar();
    }
    while (chr != '\n' && chr != EOF);
}
