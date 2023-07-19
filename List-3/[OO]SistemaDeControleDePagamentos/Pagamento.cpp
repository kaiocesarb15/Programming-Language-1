#include "Pagamento.h"

Pagamento::Pagamento(){
    setValor(0.0);
    setNome("");
}

float Pagamento::getValor(){
    return valorPagamento;
}

string Pagamento::getNome(){
    return nomeDoFuncionario;
}

void Pagamento::setValor(float valor){
    this->valorPagamento = valor;
}

void Pagamento::setNome(string nome){
    this->nomeDoFuncionario = nome;
}