
// =================================== C =================================== //
/*#include <stdio.h>

typedef struct{
    char nome[50];
    int idade;
    int chutes;
    int gols;
} tjogador;

void TiraEnter(char *s){
    int i;
    
    for(i=0; s[i] != '\0'; i++){
        if(s[i] == '\n')
            s[i] = '\0';
    }
}

int main(void){
    tjogador jogador[2];
    int i;
    
    for(i=0; i<2; i++){
        fgets(jogador[i].nome, 50, stdin);
        TiraEnter(jogador[i].nome);
        scanf("%d%d%d%*c", &jogador[i].idade, &jogador[i].chutes, &jogador[i].gols);
    }
    if(jogador[0].gols*100.0 / jogador[0].chutes > jogador[1].gols*100.0 / jogador[1].chutes)
        printf("%s (%d)", jogador[0].nome, jogador[0].idade);
    else
        printf("%s (%d)", jogador[1].nome, jogador[1].idade);
    
    return 0;
}*/
// ========================================================================= //

// =================================== C++ ================================= //
#include <iostream>

using namespace std;

typedef struct{
    string nome;
    int idade;
    int chutes;
    int gols;
} tjogador;

int main(void){
    tjogador jogador[2];
    
    for(int i=0; i<2; i++){
        getline(cin, jogador[i].nome);
        cin >> jogador[i].idade >> jogador[i].chutes >> jogador[i].gols;
        cin.ignore();
    }

    if(jogador[0].gols*100.0 / jogador[0].chutes > jogador[1].gols*100.0 / jogador[1].chutes)
        cout << jogador[0].nome << " (" << jogador[0].idade << ")" << endl;
    else
        cout << jogador[1].nome << " (" << jogador[1].idade << ")" << endl;
    
    return 0;
}
// ========================================================================= //