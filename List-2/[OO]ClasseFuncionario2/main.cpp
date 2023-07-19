#include <iostream>
#include <vector>
#include "Funcionarios.h"

using namespace std;

int main()
{
    vector <Funcionarios> funVec;
    int n, i;
    string nome, sobrenome;
    float salario;

    cin >> n;

    for(i=0; i<n; i++){
        cin.ignore();
        cin >> nome >> sobrenome >> salario;

        Funcionarios fun(nome, sobrenome, salario);
        funVec.push_back(fun);
    }

    for(i=0; i<n; i++){
        cout << funVec[i].getNom() << " " << funVec[i].getSob() << " - "
        << funVec[i].getSal() << " - " << funVec[i].getSalarioAnual() << endl;
        
        funVec[i].aumentaSalario(0.1);
        cout << funVec[i].percent << endl;
    }

    return 0;
}