#include "Casa.h"

Casa::Casa() : Imoveis(1){
    nome = "Casa";
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