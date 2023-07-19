#include "Livro.h"

Livro::Livro(string titulo, int totalPaginas){
    this->titulo = titulo;
    this->totalPaginas = totalPaginas;
}

int Livro::getTotal(){
    return totalPaginas;
}

void Livro::toString(){
    cout << titulo << ", páginas: " << getTotal() << endl;
}