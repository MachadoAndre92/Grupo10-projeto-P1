#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED

#include "constantes.h"
typedef struct
{
    int dia;
    int mes;
    int ano;
}tipoData;

typedef struct
{
    char bikeCodigo[MAX_STRING];
    char modelo[MAX_STRING];
    int bikeEstado;
    int bikeCampus;
} tipoBike;

typedef struct
{
    int utenteCod;
    char utenteNome;
    int utenteTelefone;
    char utenteTipo;
} tipoUtente;





#endif
