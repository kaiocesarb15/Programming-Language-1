#include <iostream>
#include <string>
#include "Funcionario.h"

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    Funcionario funcionario[n];

    for(i=0; i<n; i++){
        cin.ignore();
        getline(cin, funcionario[i].nome);
        getline(cin, funcionario[i].sobrenome);
        cin >> funcionario[i].salario;
    }

    for(i=0; i<n; i++){
        cout << funcionario[i].nome << " " << funcionario[i].sobrenome << " - "
        << funcionario[i].salario << " - " << funcionario[i].getSalarioAnual() << endl;
    }

    return 0;
}