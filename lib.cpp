//
// Created by Matteo on 11/12/2021.
//

#include "lib.h"
#include <string.h>
bool res (char lista_nomi[10][20],char nome[20],int &i){
    for (i=0;i<10;i++){
        if((strcmp(lista_nomi[i],nome))==0){
            return true;
        }
    }
    return false;
}

