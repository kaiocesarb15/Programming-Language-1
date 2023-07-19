#include "Casa.h"

Casa::Casa() : Imoveis(1){
    nome = "Casa";
}

Casa::~Casa(){
    cout << "Deletando Casa" << endl;
}

void Casa::lerAtributos(){
    Imoveis :: lerAtributos();

    cin >> nPavimentos >> nQuartos >> areaTerreno >> areaConstruida;
}

void Casa::exibeAtributos(){
    Imoveis :: exibeAtributos();

    cout << nPavimentos << " pavimentos, " << nQuartos << " quartos, "
    << areaTerreno << "m2 de área de terreno e " << areaConstruida
    << "m2 de área construída. R$ " << valor << "." << endl;
}