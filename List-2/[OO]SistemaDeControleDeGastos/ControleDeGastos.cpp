#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos(){}

void ControleDeGastos::setDespesa(Despesa d, int pos){
    despesas[pos] = d;
}

Despesa ControleDeGastos::getDespesa(int pos){
    return despesas[pos];
}

float ControleDeGastos::calculaTotalDeDespesas(){
    float total=0;

    for(int i=0; i<100; i++){
        total += despesas[i].getVal();
    }
    return total;
}

float ControleDeGastos::calculaTotalDeDespesas(string tipo){
    float total=0;

    for(int i=0; i<100; i++){
        if(despesas[i].getTip().find(tipo) != string::npos)
            total += despesas[i].getVal();
    }
    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo){
    for(int i=0; i<100; i++){
        if(despesas[i].getTip() == tipo)
            return true;
    }
    return false;
}