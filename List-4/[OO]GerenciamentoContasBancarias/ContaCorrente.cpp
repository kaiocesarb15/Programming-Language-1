#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(string nomeCliente, int numero, double salario)
: Conta(nomeCliente, numero){
    this->salario = salario;
    definirLimite();
    saldo = limite;
}

void ContaCorrente::definirLimite(){
    limite = 2 * salario;
}

double ContaCorrente::getSalario(){
    return salario;
}

double ContaCorrente::getLimite(){
    return limite;
}