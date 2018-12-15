#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED

#include "constantes.h"
#include "time.h"

typedef struct
{
    int dia;
    int mes;
    int ano;
}tipoData;

typedef struct
{
    int registoEmprestimo;
    char bikeEmprestimo[MAX_STRING];
    int codEmprestimoUtente;
    time_t dataEmprestimo;
} tipoEmprestimo;

typedef struct
{
    char bikeDesignacao[MAX_STRING];
    char bikeModelo[MAX_STRING];
    int bikeEstado;
    int bikeCampus;
    float bikeKm;
    int bikeEmprestimos;
} tipoBike;

typedef struct
{
    int utenteCod;
    char utenteNome[MAX_STRING];
    int utenteTelefone;
    char utenteTipo[MAX_STRING];
} tipoUtente;





#endif
