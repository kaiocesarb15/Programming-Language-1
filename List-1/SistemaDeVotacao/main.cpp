// ============================ C ============================ //
/*#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int numero;
    double qVotos;
} tRegistroClasse;

void TiraEnter(char s[]){
    int i;
    
    for(i=0; s[i] != '\0'; i++){
        if(s[i] == '\n')
            s[i] = '\0';
    }
}

int main(void){
    int nCand, i, voto, cont=0, nulo=0;
    
    scanf("%d", &nCand);
    
    tRegistroClasse candidato[nCand];
    double percentual[nCand], maiorP;
    
    for(i=0; i<nCand; i++){
        candidato[i].qVotos = 0;
        scanf("%d%*c", &candidato[i].numero);
        fgets(candidato[i].nome, 50, stdin);
        TiraEnter(candidato[i].nome);
    }
    
    while(1){
        scanf("%d", &voto);
        if(voto < 1)
            break;
        
        cont++;
        
        for(i=0; i<nCand; i++){
            if(voto == candidato[i].numero){
                candidato[i].qVotos++;
                voto = 0;
                break;
            }
        }
        if(voto != 0)
            nulo++;
    }
    
    for(i=0; i<nCand; i++){
        percentual[i] = (candidato[i].qVotos*100.0) / cont;
        
        if(i == 0 || percentual[i] > maiorP){
            maiorP = percentual[i];
        }
        
        candidato[i].qVotos = percentual[i];
    }
    
    for(i=0; i<nCand; i++){
        printf("%.2lf - %d - %s %s", candidato[i].qVotos, candidato[i].numero, candidato[i].nome, candidato[i].qVotos == maiorP ? "VENCEDOR\n" : "\n");
    }
    printf("%.2lf - Nulos", (nulo*100.0) / cont);
    
    return 0;
}*/
// =========================================================== //

// =========================== C++ =========================== //
#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string nome;
    int numero;
    double qVotos;
} tRegistroClasse;

int main(void){
    int nCand, i, voto, cont=0, nulo=0;
    
    cin >> nCand;
    
    tRegistroClasse candidato[nCand];
    double percentual[nCand], maiorP;
    
    for(i=0; i<nCand; i++){
        candidato[i].qVotos = 0;
        cin >> candidato[i].numero;
        getchar();
        getline(cin, candidato[i].nome);
    }
    
    while(1){
        cin >> voto;
        if(voto < 1)
            break;
        
        cont++;
        
        for(i=0; i<nCand; i++){
            if(voto == candidato[i].numero){
                candidato[i].qVotos++;
                voto = 0;
                break;
            }
        }
        if(voto != 0)
            nulo++;
    }
    
    for(i=0; i<nCand; i++){
        percentual[i] = (candidato[i].qVotos*100.0) / cont;
        
        if(i == 0 || percentual[i] > maiorP){
            maiorP = percentual[i];
        }
        
        candidato[i].qVotos = percentual[i];
    }
    
    for(i=0; i<nCand; i++){
        printf("%.2lf - %d - %s %s", candidato[i].qVotos, candidato[i].numero, candidato[i].nome, candidato[i].qVotos == maiorP ? "VENCEDOR\n" : "\n");
    }
    printf("%.2lf - Nulos", (nulo*100.0) / cont);
    
    return 0;
}
// =========================== C++ =========================== //