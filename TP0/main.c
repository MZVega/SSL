#include "Untitled2.h"


int main (void) {
    char c = getchar();
    while(c != 'E0F'){
        int token = get_token(c);
        if(token == 1){
            int i = 0;
            char palabra[i];
            while(token == 1){
               palabra[i] = c;
               i++;
               c = getchar();
            }
            printf("Cadena: %c \n", palabra);
        }
        else if(token == 2){printf("Separador: %c \n", c);}
        else if(token == 0){ printf("Fin de cadena: %c \n", c);}
        c = getchar();
        }
    return 0;
}
