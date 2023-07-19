#include <iostream>
#include "Invoice02.h"

using namespace std;

int main(){
    int numero[2], quantidade[2];
    float preco[2];
    string descricao[2];
    int i;

    for(i=0; i<2; i++){
        cin >> numero[i];
        cin.ignore();
        getline(cin, descricao[i]);
        cin >> quantidade[i] >> preco[i];
    }

    Invoice02 inv1(numero[0], descricao[0], quantidade[0], preco[0]);
    Invoice02 inv2(numero[1], descricao[1], quantidade[1], preco[1]);
    inv1.print();
    inv2.print();

    return 0;
}