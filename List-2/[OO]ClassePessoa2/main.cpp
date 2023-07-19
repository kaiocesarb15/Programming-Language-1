#include <iostream>
#include <vector>
#include "Pessoa.h"

using namespace std;

int main()
{
    vector <Pessoa> pessoas;
    string nome, telefone, procurado;
    int idade;
    int i, n;
    bool achou=false;

    cin >> n;
    cin.ignore();

    for(i=0; i<n; i++){
        getline(cin, nome);
        cin >> idade;
        cin.ignore();
        getline(cin, telefone);

        Pessoa pessoa(nome, idade, telefone);
        pessoas.push_back(pessoa);
    }

    getline(cin, procurado);

    for(i=0; i<n; i++){
        if(pessoas[i].getNom().find(procurado) != string::npos){
            cout << pessoas[i].getNom() << ", " << pessoas[i].getIda() << ", " << pessoas[i].getTel() << endl;
            achou= true;
        }
    }
    if(!achou)
        cout << "Pessoa não encontrada" << endl;

    return 0;
}