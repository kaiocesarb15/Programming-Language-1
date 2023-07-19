#include "Insumo.h"

Insumo::Insumo(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomefabricante){
    this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomefabricante = nomefabricante;
}

Insumo::~Insumo(){
    cout << "Deletando Insumos" << endl;
}