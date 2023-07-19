#include "Terreno.h"

Terreno::Terreno() : Imoveis(3){
    nome = "Terreno";
}

void Terreno::lerAtributos(){
    Imoveis :: lerAtributos();

    cin >> area;
}

void Terreno::exibeAtributos(){
    Imoveis :: exibeAtributos();

    cout << area << "m2 de área de terreno. R$ " << valor << "." << endl;
}