//En este archivo solo se tendrá la función get_token
//#include <stdio.h>
#include "scanner.h"

int main (void) {
    char c = getchar();
    while (c != 'EOF'){
        int token = get_token(c);
        if(token == 1){
            printf(); //Imprimir token
            while(token == 1){
                
            };

        }
        printf();
    }
    printf(); //Imprimir FDT
    return 0;
}

/*
Se encuentra una letra
        token = Cadena
        Imprime token y la Cadena
Se encuentra una coma
        token = Separador
        Imprime el token y la coma
*/