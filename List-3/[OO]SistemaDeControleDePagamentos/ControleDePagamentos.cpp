#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos(){}

void ControleDePagamentos::setPagamento(Pagamento p, int index){
    pagamentos[index] = p;
}

Pagamento ControleDePagamentos::getPagamento(int pos){
    return pagamentos[pos];
}

float ControleDePagamentos::calculaTotalDePagamentos(){
    float total=0;

    for(int i=0; i<10; i++){
        total += pagamentos[i].getValor();
    }
    return total;
}

int ControleDePagamentos::getIndexFuncionario(string nomeFuncionario){
    for(int i=0; i<10; i++){
        if(pagamentos[i].getNome().find(nomeFuncionario) != string::npos)
            return i;
    }
    return -1;
}