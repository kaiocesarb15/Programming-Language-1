#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

int main()
{
    invoice a, b;

    cin >> a.numero;
    cin.ignore();
    getline(cin, a.descricao);
    cin >> a.quantidade;
    cin >> a.preco;
    if (a.quantidade < 0)
        a.quantidade = 0;
    if (a.preco < 0)
        a.preco = 0;

    cin >> b.numero;
    cin.ignore();
    getline(cin, b.descricao);
    cin >> b.quantidade;
    cin >> b.preco;
    if (b.quantidade < 0)
        b.quantidade = 0;
    if (b.preco < 0)
        b.preco = 0;

    cout << a.numero << " - " << a.descricao << " - " << a.quantidade
    << " - " << a.preco << " - " << a.getInvoiceAmount() << endl;
    cout << b.numero << " - " << b.descricao << " - " << b.quantidade
    << " - " << b.preco << " - " << b.getInvoiceAmount() << endl;

    return 0;
}