#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string nomeCliente, int numeroConta, double salarioMensal)
: Conta(nomeCliente, numeroConta, salarioMensal){
    definirLimite();
    saldo = limite;
}

void ContaEspecial::definirLimite(){
    limite = salarioMensal * 3;
}