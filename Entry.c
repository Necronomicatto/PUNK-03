#include "Entry.h"
#include <stdio.h>

void readMatrix(char matrix[3][3], FILE *fp){           //escaneia a matriz do arquivo e passa pra variavel
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            fscanf(fp, "%c", &matrix[x][y]);
        }
        fgetc(fp);
    }
}