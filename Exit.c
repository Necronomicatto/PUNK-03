#include "Exit.h"
#include <stdio.h>

void printFile(FILE *fp, char matrix[3][3]){            //escreve os jogos no arquivo de saida
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            fprintf(fp, "%c", matrix[i][j]);
        }
        fputs("\n", fp);
    }
    fputs("\n", fp);
}