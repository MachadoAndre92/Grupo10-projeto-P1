#ifndef FUNCOES_AUXILIARES_H_INCLUDED
#define FUNCOES_AUXILIARES_H_INCLUDED
#include "structs.h"
#include "constantes.h"

//Funçoes Auxiliares
int lerInteiro(char mensagem[MAX_STRING], int minimo, int maximo);
float lerFloat(char mensagem[MAX_STRING], float minimo, float maximo);
void lerString(char mensagem[MAX_STRING], char vetorCaracteres[MAX_STRING], int maximoCaracteres);
tipoData lerData();
void limpaBufferStdin(void);

int procurarStringBike(tipoBike vetorBikes[],int contadorBikes,char str1[]);
int procurarInteiroUtente(tipoUtente vetorUtentes[],int contadorUtentes,int auxiliar);




//Funçoes Menu
int menuTipoUtente();
char menu(char descricaoUtente[],int opcaoUtente);
char menuBike(char descricaoUtente[],int opcaoUtente);
char menuUtente(char descricaoUtente[],int opcaoUtente);


//Funções Bicicletas
void adicionarBike(tipoBike vetorBikes[],int* contadorBikes);
void consultarBike(tipoBike vetorBikes[],int contadorBikes);


//Funcções Bicicletas
void adicionarUtente(tipoUtente vetorUtentes[],int *contadorUtentes);








#endif // FUNCOES_AUXILIARES_H_INCLUDED
