#include <iostream>
#include "Abstrata.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(){
    int tipo;
    Abstrata *fg[4] = {new Quadrado(), new Retangulo(), new Triangulo(), new Circulo()};

    while(true){
        cin >> tipo;
        if(!tipo) break;

        fg[tipo-1]->lerAtributosArea();
        cout << fg[tipo-1]->getNome() << " polimórfico de área " << fg[tipo-1]->calcularArea() << endl;
    }

    return 0;
}