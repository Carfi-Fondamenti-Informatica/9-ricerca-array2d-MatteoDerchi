#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char lista_nomi [10][20];
    char nome [20];
    int a=0;
    for(int i=0;i<10;i++){
        cin>>lista_nomi[i];
    }
    cin>>nome;
    if (res(lista_nomi,nome,a)){
        cout<<a;
    }else{
        cout<<"non presente";
    }
    return 0;
}

