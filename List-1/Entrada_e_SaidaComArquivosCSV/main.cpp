#include <stdio.h>

typedef struct{
    int cpf;
    char nome[20];
    char sobrenome[20];
    char endereco[50];
    char telefone[10];
} fdados;

void TiraEnter(char *s){
    int i;
    
    for(i=0; s[i] != '\0'; i++){
        if(s[i] == '\n')
            s[i] = '\0';
    }
}

int main(void){
    int n, i;
    fdados dados;
    char s[] = "CPF,nome,snome,endereço,telefone";
    
    scanf("%d%*c", &n);
    FILE *file = fopen("arq.csv", "w");
    
    fprintf(file, "%s\n", s);
    
    for(i=0; i<n; i++){
        scanf("%d%*c", &dados.cpf);
        scanf("%s", dados.nome);
        scanf("%s%*c", dados.sobrenome);
        fgets(dados.endereco, 50, stdin);
        TiraEnter(dados.endereco);
        fgets(dados.telefone, 10, stdin);
        TiraEnter(dados.telefone);
        
        fprintf(file, "%d,%s,%s,%s,%s\n", dados.cpf, dados.nome, dados.sobrenome, dados.endereco, dados.telefone);
    }
    
    fclose(file);
    
    file = fopen("arq.csv", "r");
    char c;
    
    while(fscanf(file, "%c", &c) != EOF){
        printf("%c", c);
    }
        
    fclose(file);
    
    return 0;
}