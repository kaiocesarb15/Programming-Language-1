#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"

using namespace std;

int main(){
    Endereco endereco;
    int n, numero;
    string nome, cep, rua, bairro, cidade, estado, telefone;

    cin >> n;
    cin.ignore();
    Pessoa pessoas[n];

    for(int i=0; i<n; i++){
        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        cin >> numero;
        cin.ignore();
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, cep);

        endereco = Endereco(rua, numero, bairro, cidade, estado, cep);
        pessoas[i] = Pessoa(nome, endereco, telefone);
    }

    for(int i=0; i<n; i++){
        cout << pessoas[i].toString() << endl << endl;
    }

    return 0;
}