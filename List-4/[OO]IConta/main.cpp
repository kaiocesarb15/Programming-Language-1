#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){
    Conta *contas[2];
    string nomeCliente;
    int numeroConta;
    double salarioMensal, valorSaque, valorDeposito;

    for(int i=0; i<2; i++){
        getline(cin, nomeCliente);
        cin >> numeroConta >> salarioMensal >> valorDeposito >> valorSaque;
        cin.ignore();

        if(i == 0)
            contas[i] = new Conta(nomeCliente, numeroConta, salarioMensal);
        else
            contas[i] = new ContaEspecial(nomeCliente, numeroConta, salarioMensal);
    
        contas[i]->depositar(valorDeposito);
        contas[i]->sacar(valorSaque);

        cout << contas[i]->getNome() << ", cc: " << contas[i]->getNumeroConta() << ", salário " << contas[i]->getSalario()
        << ", saldo total disponível: R$ " << contas[i]->saldoTotalDisponivel() << endl;
    }

    return 0;
}