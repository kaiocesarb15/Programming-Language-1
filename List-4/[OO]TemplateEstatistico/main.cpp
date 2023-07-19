#include <iostream>
#include <vector>
#include "Estatisticas.h"
#include "Livro.h"
#include "Pedido.h"

using namespace std;

int main(){
    vector <Livro> livros;
    vector <Pedido> pedidos;
    Estatisticas <Livro> estLivro;
    Estatisticas <Pedido> estPedido;
    int n, quantidade, totalPaginas;
    float valorUnitario;
    string titulo;

    cin >> n;
    while(n--){
        cin >> valorUnitario >> quantidade;
        pedidos.push_back(Pedido(valorUnitario, quantidade));
    }

    cin >> n;
    while(n--){
        cin.ignore();
        getline(cin, titulo);
        cin >> totalPaginas;
        livros.push_back(Livro(titulo, totalPaginas));
    }

    cout << "Maior: ";
    pedidos[estPedido.indexOfMaior(pedidos)].toString();
    cout << "Menor: ";
    pedidos[estPedido.indexOfMenor(pedidos)].toString();
    cout << "Média: " ;
    cout << estPedido.media(pedidos) << endl;

    cout << "Maior: ";
    livros[estLivro.indexOfMaior(livros)].toString();
    cout << "Menor: ";
    livros[estLivro.indexOfMenor(livros)].toString();
    cout << "Média: " << estLivro.media(livros) << endl;

    return 0;
}