#include <stdio.h>
#include <stdlib.h>
#include "Errors.h"
#include "Entry.h"
#include "Process.h"

int main(int argc, char *argv[]){
    char Tabuleiro[3][3];
    FILE *in, *out;
    in = fopen(argv[1], "r");
    out = fopen(argv[2],"w");

    readMatrix(Tabuleiro, in);      //chama função que lê a matriz do arquivo e passa pra variavel
    games(Tabuleiro, 'O', out);     //chama a função que faz os jogos
 
    printf("%c", Tabuleiro[0][1]);
    fclose(in); 
    fclose(out);
    return 0;
}