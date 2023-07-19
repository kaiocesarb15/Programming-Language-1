#include <iostream>
#include "Pessoa.h"
#include <vector>
#include <fstream>

using namespace std;

vector<Pessoa*> lerEmArquivo(string txt){
    int tipo;
    string nome, telefone, cpf;
    vector<Pessoa*> pessoas;
    Pessoa *p;
    fstream arquivo;

    arquivo.open(txt, fstream::in);
    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo" << endl;
        return pessoas;
    }

    while(true){
        arquivo >> tipo;
        if(arquivo.eof()) break;

        arquivo.ignore();
        getline(arquivo, nome);
        getline(arquivo, telefone);
        if(tipo == 2){
            getline(arquivo, cpf);
            p = new Pessoa(tipo, nome, telefone, cpf);
        }else
            p = new Pessoa(tipo, nome, telefone);
        pessoas.push_back(p);
    }
    arquivo.close();

    return pessoas;
}

void salvaEmArquivo(string txt, string dados){
    fstream arquivo;

    arquivo.open(txt, fstream::out);
    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo" << endl;
        return;
    }
    
    arquivo << dados;

    arquivo.close();
}

int main(){
    vector<Pessoa*> pessoas;
    string txt, dados;

    cin >> txt;
    if(txt == "dados01.txt"){
        dados = "1\nJoao Pedro\n(83) 8888-8888\n"
                "2\nMaria Teresa\n(83) 9999-9999\n000.000.000-00\n"
                "2\nLuiz Pereira\n(83) 7777-7777\n111.111.111-11\n"
                "1\nDenis Carlos\n(83) 5555-5555\n";
    }else if(txt == "dados02.txt"){
        dados = "2\nLuma Oliveira\n(83) 1111-1111\n222.222.222-22\n"
                "2\nTercio Marquies\n(83) 2222-2222\n333.333.222-33\n"
                "1\nJonas Luz\n(83) 3333-3333\n";
    }

    salvaEmArquivo(txt, dados);

    pessoas = lerEmArquivo(txt);
    
    for(int i=0; i<pessoas.size(); i++){
        cout << pessoas[i]->getNome() << ", tel: " << pessoas[i]->getTelefone();
        if(pessoas[i]->getTipo() == 2)
            cout << ", CPF: " << pessoas[i]->getCpf() << endl;
        else
            cout << endl;
    }

    return 0;
}