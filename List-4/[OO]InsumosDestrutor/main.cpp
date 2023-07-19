#include <iostream>
#include "Insumo.h"
#include "Medicamento.h"
#include "Vacina.h"
#include "EPI.h"
#include "LocalController.h"

using namespace std;

int main(){
    LocalController *lc = new LocalController();
    string nome, nomefabricante, dtVencimento, tipo, dosagem, administracao, disponibilizacao, descricao;
    int quantidade, valorUnitario, quantDoses, intervalo;

    for(int i=0; i<3; i++){
        getline(cin, nome);
        cin >> quantidade >> valorUnitario >> dtVencimento >> nomefabricante;
        cin.ignore();

        if(i==0){
            getline(cin, tipo);
            cin >> quantDoses >> intervalo;
            cin.ignore();
            
            lc->addInsumoArr(new Vacina(nome, quantidade, valorUnitario, dtVencimento, nomefabricante, tipo, quantDoses, intervalo), i);
            lc->addInsumoVec(new Vacina(nome, quantidade, valorUnitario, dtVencimento, nomefabricante, tipo, quantDoses, intervalo));
        }else if(i==1){
            getline(cin, dosagem);
            getline(cin, administracao);
            getline(cin, disponibilizacao);

            lc->addInsumoArr(new Medicamento(nome, quantidade, valorUnitario, dtVencimento, nomefabricante, dosagem, administracao, disponibilizacao), i);
            lc->addInsumoVec(new Medicamento(nome, quantidade, valorUnitario, dtVencimento, nomefabricante, dosagem, administracao, disponibilizacao));
        }else{
            getline(cin, tipo);
            getline(cin, descricao);

            lc->addInsumoArr(new EPI(nome, quantidade, valorUnitario, dtVencimento, nomefabricante, tipo, descricao), i);
            lc->addInsumoVec(new EPI(nome, quantidade, valorUnitario, dtVencimento, nomefabricante, tipo, descricao));
        }
    }

    delete lc;

    return 0;
}