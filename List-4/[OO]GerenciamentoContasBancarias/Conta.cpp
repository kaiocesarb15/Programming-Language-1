#include "Conta.h"

Conta::Conta(string nomeCliente, int numero){
    this->nomeCliente = nomeCliente;
    this->numero = numero;
}

void Conta::sacar(double valor){
    if(valor > saldo){
        cout << "\nsaldo insuficiente" << endl;
        return;
    }

    saldo -= valor;
}

void Conta::depositar(double valor){
    saldo += valor;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumero(){
    return numero;
}

double Conta::getSaldo(){
    return saldo;
}
