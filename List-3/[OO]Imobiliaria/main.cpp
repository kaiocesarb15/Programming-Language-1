#include <iostream>
#include "Imoveis.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

int main(){
    Imoveis *imovel[3] = {new Casa(), new Apartamento(), new Terreno()};
    int tipo, n;

    cin >> n;
    while(n--){
        cin >> tipo;
        if(tipo == 0) break;

        imovel[tipo-1]->lerAtributos();
        imovel[tipo-1]->exibeAtributos();
    }

    return 0;
}