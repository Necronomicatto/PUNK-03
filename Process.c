#include "Process.h"
#include "Exit.h"
#include <stdio.h>

int won (char matrix[3][3], char n){
    for (int i = 0; i < 3; i++)
    {
        if (matrix[i][0] == n && matrix[i][1] ==  n && matrix[i][2] == n){
            return 1;
        } else if (matrix[0][i] == n && matrix[1][i] == n && matrix[2][i] == n){
            return 1;
        }
    }
    if ((matrix[0][0] == n && matrix[1][1] ==  n && matrix[2][2] == n) || (matrix[0][2] == n && matrix[1][1] ==  n && matrix[2][0] == n)){
        return 1;
    }
   return 0;
}

void games(char matrix[3][3], char n, FILE *out){
    int x,y;
    char Copia[3][3];


    if(won(matrix, 'X') == 1){
        return;
    }
    if(won(matrix, 'O') == 1){
    printFile(out, matrix);
    return;
    }

    //copia a matriz original
    for(x = 0; x < 3; x++){
        for(y = 0; y < 3; y++){
            Copia[x][y] = matrix[x][y];
        }
    }

    for (x = 0; x < 3; x++){
        for(y = 0; y < 3; y++){
            if(matrix[x][y] == 'B'){
                Copia[x][y] = n;
                if(n == 'O'){
                    games(Copia, 'X', out);
                    //printf("%c", Copia[x][y]);
                    Copia[x][y] = 'B';
                }else{
                    games(Copia, 'O', out);
                    Copia[x][y] = 'B';
                }
            }
        }
    }
}