#include <stdio.h>
#include <stdlib.h>
#include "Errors.h"
#include "Entry.h"
#include "Process.h"

int main(int argc, char *argv[]){
    int n;
    char Tabuleiro[3][3];
    FILE *in, *out;
    in = fopen(argv[1], "r");
    out = fopen(argv[2],"w");

    readMatrix(Tabuleiro, in);
    fclose(in);

    games(Tabuleiro, 'B', out);
 

    printf("%c", Tabuleiro[0][1]); 
    return 0;
}