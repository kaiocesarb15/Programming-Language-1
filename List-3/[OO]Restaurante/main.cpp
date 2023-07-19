#include <iostream>
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include "Restaurante.h"

using namespace std;

int main(){
    int numero, quantidade, mesa;
    string descricao;
    float preco;
    Restaurante restaurante;
    Pedido pedido;
    
    while (true)
    {
        cin >> numero;
        if(numero<0) break; 
        
        cin.ignore();
        getline(cin, descricao);
        cin >> quantidade;
        cin >> preco;
        cin >> mesa;
        
        pedido = Pedido(numero, descricao, quantidade, preco);
        restaurante.adicionarPedido(pedido, mesa);
    }
    
    for(auto i=0; i<10; i++){
        if(restaurante.getMesa(i)->getUso() != 0){
            cout << "Mesa " << i<< endl;
            restaurante.getMesa(i)->exibeConta();
            cout << "Total: R$ " << restaurante.getMesa(i)->calculaTotal() << endl << endl;
        }
    }

    cout << "Total Restaurante: R$ " << restaurante.calculaTotalRestaurante() << endl;
    
    return 0;
}