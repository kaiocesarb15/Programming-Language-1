#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main(){
    ContaCorrente *contas[2];
    Poupanca *poupanca;
    string nome;
    int numero;
    double salario, deposito, saque;

    for(int i=0; i<3; i++){
        getline(cin, nome);
        cin >> numero;

        if(i != 2){
            cin >> salario;
        }

        cin >> deposito >> saque;
        cin.ignore();

        if(i == 0)
            contas[i] = new ContaCorrente(nome, numero, salario);
        else if(i == 1)
            contas[i] = new ContaEspecial(nome, numero, salario);
        else
            poupanca = new Poupanca(nome, numero);
        
        if(i != 2){
            cout << contas[i]->getNomeCliente() << ", cc: " << contas[i]->getNumero() << ", salário " << contas[i]->getSalario() << ", ";
            contas[i]->depositar(deposito);
            contas[i]->sacar(saque);
            cout << "saldo total disponível: R$ " << contas[i]->getSaldo() << endl;
        }else{
            cout << poupanca->getNomeCliente() << ", cc: " << poupanca->getNumero() << ", ";
            poupanca->depositar(deposito);
            poupanca->sacar(saque);
            poupanca->render();
            cout << "saldo total disponível: R$ " << poupanca->getSaldo() << endl;
        }
    }

    return 0;
}