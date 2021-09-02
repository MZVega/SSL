//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
#include "scanner.h"

enum tokens{FDT, Cadena, Separador};

int get_token(char c){
    enum tokens token;

    if(c == ','){token == Separador;}
    else if(c == 'EOF'){token == FDT;}
    else if (not(isspace(c))){token == Cadena;}
    else{}
    
    return token;
}