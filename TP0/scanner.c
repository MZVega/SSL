#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Untitled2.h"

int get_token(char c){

    enum tokens id;

        if (!isspace(c)){
            if(c == ','){id = SEP;}
            else if(c == 'EOF') {id = FDT;}  //No consigo que lea EOF como tal
            else {id = CAD;}
    }
    return id;
}

