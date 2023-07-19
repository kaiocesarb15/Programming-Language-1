#include "Imobiliaria.h"

Imobiliaria::Imobiliaria(){}

Imobiliaria::~Imobiliaria(){
    cout << "Deletando Imobiliária" << endl;

    for(int i=0; i<imoveis.size(); i++)
        delete imoveis[i];
}

void Imobiliaria::addImovel(Imoveis *imovel){
    imoveis.push_back(imovel);
}

void Imobiliaria::buscarImovel(string busca){
    for(int i=0; i<imoveis.size(); i++){
        if(imoveis[i]->getNome().find(busca) != string::npos || imoveis[i]->getDisp().find(busca) != string::npos)
            imoveis[i]->exibeAtributos();
    }
}