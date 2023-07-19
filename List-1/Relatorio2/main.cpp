// ================================== C ==================================== //
/*#include <stdio.h>
#include <string.h>

typedef struct{
    char descricao[50];
    float peso;
    char tipo;
} tmovel;

void TiraEnter(char s[]){
    int i;
    
    for(i=0; s[i] != '\0'; i++){
        if(s[i] == '\n')
            s[i] = '\0';
    }
}

int main(void){
    int n, i, peso=0, real=0;
    float Pesado;
    char desPesado[50];
    tmovel movel;
    
    scanf("%d%*c", &n);
    
    
    for(i=0; i<n; i++){
        fgets(movel.descricao, 50, stdin);
        TiraEnter(movel.descricao);
        scanf("%f%*c", &movel.peso);
        scanf("%c%*c", &movel.tipo);
        
        if(movel.tipo == 's'){
            if(movel.peso > 10)
                peso++;
        }
        
        if(strstr(movel.descricao, "Real") != NULL){
            real++;
        }
        
        if(i == 0 || movel.peso > Pesado){
            Pesado = movel.peso;
            strcpy(desPesado, movel.descricao);
        }
    }
    
    printf("Tipo 's' acima de 10Kg: %d\n", peso);
    printf("Termina em  \"Real\": %d\n", real);
    printf("Mais pesado: \"%s\"\n", desPesado);
    
    return 0;
}*/
// ======================================================================= //

// ================================ C++ ================================== //
#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string descricao;
    float peso;
    char tipo;
} tmovel;

int main(void){
    int n, i, peso=0, real=0;
    float Pesado;
    string desPesado;
    tmovel movel;
    
    cin >> n;
    cin.ignore();
    
    for(i=0; i<n; i++){
        getline(cin, movel.descricao);
        cin >> movel.peso;
        cin.ignore();
        cin >> movel.tipo;
        cin.ignore();
        
        if(movel.tipo == 's' && movel.peso > 10)
            peso++;
        
        if(movel.descricao.find("Real") ==  movel.descricao.size() - 4){
            real++;
        }
        
        if(i == 0 || movel.peso > Pesado){
            Pesado = movel.peso;
            desPesado = movel.descricao;
        }
    }
    
    cout << "Tipo 's' acima de 10Kg: " << peso << endl;
    cout << "Termina em  \"Real\": " << real << endl;
    cout << "Mais pesado: \"" << desPesado << "\"" << endl;
    
    return 0;
}
// ======================================================================= //