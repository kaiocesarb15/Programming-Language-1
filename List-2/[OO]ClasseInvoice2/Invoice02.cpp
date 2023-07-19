#include "Invoice02.h"

Invoice02::Invoice02(int numero, string descricao, int quantidade, float preco){
    setNum(numero);
    setDes(descricao);
    setQua(quantidade);
    setPre(preco);
}

int Invoice02::getNum(){
    return this->numero;
}

string Invoice02::getDes(){
    return this->descricao;
}

int Invoice02::getQua(){
    return this->quantidade;
}

float Invoice02::getPre(){
    return this->preco;
}

void Invoice02::setNum(int numero){
    this->numero = numero;
}

void Invoice02::setDes(string descricao){
    this->descricao = descricao;
}

void Invoice02::setQua(int quantidade){
    if(quantidade < 0)
        quantidade = 0;
    this->quantidade = quantidade;
}

void Invoice02::setPre(float preco){
    if(preco < 0)
        preco = 0.0;
    this->preco = preco;
}

float Invoice02::getInvoiceAmount(int quantidade, float preco){
    return quantidade*preco;
}

void Invoice02::print(){
    cout << getNum() << " - " << getDes() << " - " << getQua() << " - "
    << getPre() << " - " << getInvoiceAmount(quantidade, preco) << endl;
}