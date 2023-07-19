// ================================ C =================================== //
/*
#include <stdio.h>

int main(void){
    int opcao;
    
    do{
        printf("1 - Item 1\n2 - Item 2\n3 - Item 3\n4 - Sair\n");
        scanf("%d", &opcao);
        
        if(opcao < 1 || opcao > 4)
            printf("Opcao %d Invalida\n", opcao);
        else if(opcao == 4)
            printf("Sair\n");
        else
            printf("Item %d\n", opcao);
    }while(opcao != 4);
    
    return 0;
}*/
// ===================================================================== //

// =============================== C++ ================================= //
#include <iostream>

using namespace std;

int main(void){
    int opcao;
    
    do{
        cout << "1 - Item 1\n2 - Item 2\n3 - Item 3\n4 - Sair\n";
        cin >> opcao;
        
        if(opcao < 1 || opcao > 4)
            cout << "Opcao " <<opcao<< " Invalida" << endl;
        else if(opcao == 4)
            cout << "Sair" << endl;
        else
            cout << "Item "<<opcao<< endl;
    }while(opcao != 4);

    return 0;
}
// ===================================================================== //