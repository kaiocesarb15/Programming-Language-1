#include "LocalController.h"

LocalController::LocalController(){}

LocalController::~LocalController(){
    cout << "Deletando Local" << endl;

    for(int i=0; i<3; i++){
        delete insumoArr[i];
    }

    for(int i=0; i<insumoVec.size(); i++){
        delete insumoVec[i];
    }
}

void LocalController::addInsumoArr(Insumo *in, int index){
    insumoArr[index] = in;
}

void LocalController::addInsumoVec(Insumo *in){
    insumoVec.push_back(in);
}