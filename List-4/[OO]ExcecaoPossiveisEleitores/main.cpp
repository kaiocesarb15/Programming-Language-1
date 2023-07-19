#include <iostream>
#include "Eleitor.h"
#include "GerenciadorEleitores.h"

using namespace std;

int main(){
    int n, idade, titulo;
    string nome;
    GerenciadorEleitores gerenciador;

    cin >> n;

    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, nome);
        cin >> idade >> titulo;

        gerenciador.cadastrarEleitor(nome, idade, titulo);
    }
    
    gerenciador.verificaEleitores();

    return 0;
}