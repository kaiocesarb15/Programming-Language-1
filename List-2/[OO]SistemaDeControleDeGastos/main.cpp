#include <iostream>
#include "ControleDeGastos.h"
#include "Despesa.h"

using namespace std;

int main(){
    Despesa d;
    ControleDeGastos cdg;
    string nome, tipo;
    float valor;
    int n, i;

    cin >> n;
    cin.ignore();

    for(i=0; i<n; i++){
        getline(cin, nome);
        cin >> valor;
        cin.ignore();
        getline(cin, tipo);

        d.setNom(nome);
        d.setVal(valor);
        d.setTip(tipo);

        cdg.setDespesa(d, i);
    }

    cin >> tipo;
    if(cdg.existeDespesaDoTipo(tipo)){
        for(i=0; i<100; i++){
            d = cdg.getDespesa(i);
            if(d.getTip() == tipo){
                cout << d.getNom() << ", R$ " << d.getVal() << endl;
            }
        }
    }else
        cout << "Nenhuma despesa do tipo especificado" << endl;

    cout << "Total: " << cdg.calculaTotalDeDespesas(tipo) << "/" << cdg.calculaTotalDeDespesas() << endl;

    return 0;
}