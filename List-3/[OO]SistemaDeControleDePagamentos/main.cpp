#include <iostream>
#include "ControleDePagamentos.h"
#include "Pagamento.h"

using namespace std;

int main(){
    ControleDePagamentos cdp;
    Pagamento p;
    int nPagamentos, i;
    float valor;
    string nome;

    cin >> nPagamentos;

    for(i=0; i<nPagamentos; i++){
        cin >> valor;
        cin.ignore();
        getline(cin, nome);

        p.setValor(valor);
        p.setNome(nome);

        cdp.setPagamento(p, i);
    }

    getline(cin, nome);

    if(cdp.getIndexFuncionario(nome) != -1){
        p = cdp.getPagamento(cdp.getIndexFuncionario(nome));
        cout << p.getNome() << ": R$ " << p.getValor() << endl;
    }else
        cout << nome << " não encontrado(a)." << endl;

    cout << "Total: R$ " << cdp.calculaTotalDePagamentos() << endl;

    return 0;
}