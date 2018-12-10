#ifndef FUNCOES_AUXILIARES_H_INCLUDED
#define FUNCOES_AUXILIARES_H_INCLUDED
#include "structs.h"
#include "constantes.h"

int lerInteiro(char mensagem[MAX_STRING], int minimo, int maximo);
float lerFloat(char mensagem[MAX_STRING], float minimo, float maximo);
void lerString(char mensagem[MAX_STRING], char vetorCaracteres[MAX_STRING], int maximoCaracteres);
tipoData lerData();
void limpaBufferStdin(void);

int procurarString(tipoBike vetorBikes[],int contadorBikes,char str1[]);




int menuUtente();
char menu(char descricaoUtente[],int opcaoUtente);
char menuBike(char descricaoUtente[],int opcaoUtente);
void adicionarBike(tipoBike vetorBikes[],int* contadorBikes);







#endif // FUNCOES_AUXILIARES_H_INCLUDED
