#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main(){
    Funcionario *funcionario[2] = {new Funcionario(), new Consultor()};
    int matricula;
    string nome;
    float salario;

    for(int i=0; i<2; i++){
        cin >> matricula;
        cin.ignore();
        getline(cin, nome);
        cin >> salario;

        funcionario[i]->setMatricula(matricula);
        funcionario[i]->setNome(nome);
        funcionario[i]->setSalario(salario);
    }

    for(int i=0; i<2; i++){
        cout << funcionario[i]->getMatricula() << " - " << funcionario[i]->getNome()
        << " - R$ " << funcionario[i]->getSalario() << endl;
    }

    return 0;
}