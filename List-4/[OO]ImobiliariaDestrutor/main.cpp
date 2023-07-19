#include <iostream>
#include "Imobiliaria.h"
#include "Imoveis.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

int main(){
    Imoveis *imovel[3] = {new Casa(), new Apartamento(), new Terreno()};
    Imobiliaria *imobiliaria = new Imobiliaria();
    int tipo, n;
    string s;

    cin >> n;
    while(n--){
        cin >> tipo;
        if(tipo != 0){
            imovel[tipo-1]->lerAtributos();
            imobiliaria->addImovel(imovel[tipo-1]);
        }
    }
    
    cin.ignore();
    getline(cin, s);
    imobiliaria->buscarImovel(s);

    delete imobiliaria;

    return 0;
}