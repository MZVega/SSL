#include "scanner.h"

int main (void) {
    char c = getchar();
    while(c != 'E0F'){
        int token = get_token(c);
        if(token == 2){printf("\nSeparador: %c", c); c = getchar();}
        else if(token == 1){
            printf("\nCadena:");
            while(c != ',' && !isspace(c)){
               printf("%c", c);
               c = getchar();
            }
            ungetc(c);
        }
        else if(token == 0){ printf("\nFin de cadena: %c", c); c = getchar();}
        else {c = getchar();}
    }
    return 0;
}
