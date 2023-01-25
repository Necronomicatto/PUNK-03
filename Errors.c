#include "Errors.h"
#include <stdio.h>
#include <stdlib.h>

void parameterTest(int argc){                                                                       //testa se o comando foi digitado corretamente
    if (argc != 3) {
        printf("Use: ./executavel <arquivoEntrada> <arquivoSaida>");
        exit(0);
    }
}

void OpeningTest(FILE *fp, const char *path, const char *mode){                   //verifica se o arquivo existe e se pode ser aberto com o modo

    if (fp == NULL) {
        printf("Falha em abrir o arquivo %s com o modo %s\n", path, mode);
        exit(0);
    }
}