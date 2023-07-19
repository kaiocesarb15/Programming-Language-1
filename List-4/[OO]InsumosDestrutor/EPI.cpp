#include "EPI.h"

EPI::EPI(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomefabricante, string tipo, string descricao)
: Insumo(nome, quantidade, valorUnitario, dtVencimento, nomefabricante){
    this->tipo = tipo;
    this->descricao = descricao;
}

EPI::~EPI(){
    cout << "Deletando EPI" << endl;
}