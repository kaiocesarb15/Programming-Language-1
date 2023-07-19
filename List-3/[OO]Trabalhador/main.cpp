#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(){
    float valor;
    int n, tipo, horas;
    string nome;
    Trabalhador *trabalhadores;

    cin >> n;
    while(n--){
        cin >> tipo;
        cin.ignore();
        getline(cin, nome);
        cin >> valor;

        if(tipo == 1)
            trabalhadores = new TrabalhadorAssalariado(valor, nome);

        else{
            cin >> horas;
            trabalhadores = new TrabalhadorPorHora(valor, nome);
        }
        
        cout << trabalhadores->getNome() << " - Semanal: R$ ";
        if(tipo == 1) 
            cout << ((TrabalhadorAssalariado*)trabalhadores)->calcularPagamentoSemanal();
        else 
            cout << ((TrabalhadorPorHora*)trabalhadores)->calcularPagamentoSemanal(horas);
        cout << " - Mensal: R$ " << trabalhadores->getSalario() << endl;
    }

    return 0;
}