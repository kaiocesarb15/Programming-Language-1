// ================================= C ================================= //
/*#include <stdio.h>

typedef struct{
    char modelo[20];
    char marca[20];
    int ano;
    double preco;
}tVeiculo;

int main(void){
    tVeiculo v[2];
    int i;
    
    for(i=0; i<2; i++){
        scanf("%s", v[i].modelo);
        scanf("%s", v[i].marca);
        scanf("%d", &v[i].ano);
        scanf("%lf", &v[i].preco);
    }
    
    if(v[0].ano == v[1].ano){
        if(v[0].preco < v[1].preco)
            printf("%s %s", v[0].marca, v[0].modelo);
        else
            printf("%s %s", v[1].marca, v[1].modelo);
    }else if(v[0].ano < v[1].ano)
        printf("%s %s", v[0].marca, v[0].modelo);
    else
        printf("%s %s", v[1].marca, v[1].modelo);
            
    return 0;
}*/
// ===================================================================== //

// ================================ C++ ================================ //
#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string modelo;
    string marca;
    int ano;
    double preco;
}tVeiculo;

int main(void){
    tVeiculo v[2];
    int i;
    
    for(i=0; i<2; i++){
        cin >> v[i].modelo >> v[i].marca >> v[i].ano >> v[i].preco;
    }
    
    if(v[0].ano == v[1].ano){
        if(v[0].preco < v[1].preco)
            cout << v[0].marca << " " << v[0].modelo;
        else
            cout << v[1].marca << " " << v[1].modelo;
    }else if(v[0].ano < v[1].ano)
        cout << v[0].marca << " " << v[0].modelo;
    else
        cout << v[1].marca << " " << v[1].modelo;
    
    return 0;
}
// ===================================================================== //