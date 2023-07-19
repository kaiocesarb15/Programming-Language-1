#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main()
{
    int i;
    Pessoa pessoa[2];

    for(i=0; i<2; i++){
        getline(cin, pessoa[i].nome);
        cin >> pessoa[i].idade;
        cin.ignore();
        getline(cin, pessoa[i].telefone);
    }

    for(i=0; i<2; i++){
        cout << pessoa[i].nome << ", " << pessoa[i].idade << ", " << pessoa[i].telefone << endl;
    }

    return 0;
}