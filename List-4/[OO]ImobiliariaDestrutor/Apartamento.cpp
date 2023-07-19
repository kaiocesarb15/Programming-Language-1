#include "Apartamento.h"

Apartamento::Apartamento() : Imoveis(2){
    nome = "Apartamento";
}

Apartamento::~Apartamento(){
    cout << "Deletando Apartamento" << endl;
}

void Apartamento::lerAtributos(){
    Imoveis :: lerAtributos();

    cin >> area >> nQuartos >> andar >> valorCondominio >> nGaragem;
}

void Apartamento::exibeAtributos(){
    Imoveis :: exibeAtributos();

    cout << area << "m2 de área, " << nQuartos << " quartos, " << andar
    << " andar(es), "<< valorCondominio << " de condomínio, " << nGaragem
    << " vaga(s) de garagem. R$ " << valor << "." << endl;
}