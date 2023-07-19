#include "Conta.h"

Conta::Conta(string nomeCliente, int numeroConta, double salarioMensal){
    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->salarioMensal = salarioMensal;
    definirLimite();
    saldo = limite;
}

void Conta::definirLimite(){
    limite = salarioMensal * 2;
}

double Conta::saldoTotalDisponivel(){
    return saldo;
}

void Conta::sacar(double valor){
    if(valor <= saldo)
        saldo -= valor;
}

void Conta::depositar(double valor){
    saldo += valor;
}

string Conta::getNome(){
    return nomeCliente;
}

int Conta::getNumeroConta(){
    return numeroConta;
}

double Conta::getSalario(){
    return salarioMensal;
}