#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string nomeCliente, int numero, double salario)
: ContaCorrente(nomeCliente, numero, salario){
    definirLimite();
    saldo = limite;
}

void ContaEspecial::definirLimite(){
    limite = 4 * salario;
}