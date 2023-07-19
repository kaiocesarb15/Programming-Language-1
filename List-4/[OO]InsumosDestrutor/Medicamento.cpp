#include "Medicamento.h"

Medicamento::Medicamento(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomefabricante, string dosagem, string administracao, string disponibilizacao)
: Insumo(nome, quantidade, valorUnitario, dtVencimento, nomefabricante){
    this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;
}

Medicamento::~Medicamento(){
    cout << "Deletando Medicamento" << endl;
}