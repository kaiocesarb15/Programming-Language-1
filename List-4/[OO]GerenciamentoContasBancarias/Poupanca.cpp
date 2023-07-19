#include "Poupanca.h"

Poupanca::Poupanca(string nomeCliente, int numero)
: Conta(nomeCliente, numero){
    taxaRendimento = 0.006;
    saldo = 0;
}

void Poupanca::render(){
    saldo += saldo * taxaRendimento;
}

int Poupanca::getVariacao(){
    return variacao;
}

double Poupanca::getTaxaRendimento(){
    return taxaRendimento;
}
