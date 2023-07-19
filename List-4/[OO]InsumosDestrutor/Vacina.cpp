#include "Vacina.h"

Vacina::Vacina(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomefabricante, string tipo, int quantDoses, int intervalo)
: Insumo(nome, quantidade, valorUnitario, dtVencimento, nomefabricante){
    this->tipo = tipo;
    this->quantDoses = quantDoses;
    this->intervalo = intervalo;
}

Vacina::~Vacina(){
    cout << "Deletando Vacina" << endl;
}