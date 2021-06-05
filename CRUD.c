#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>
struct ficha {
    char nome[40];
    char telefone[20];
    char endereco[70];
    char email[40];
    char nascimento[10];
    bool ativo;
    };
    
int procurar(char procurado[], struct ficha vetor[], int num_fichas) {
    int i;
    for(i=0; i<num_fichas; i++) {
        if(strcmp(procurado, vetor[i].nome) == 0) {
           return i;
        }
    }
    return -1;
}

int main() {
    struct ficha agenda[100];
    int fichas_existentes = 0, proxima = 0;
    char opcao[10]="0";
    setlocale(LC_ALL, "Portuguese");
    
    while(opcao[0] != '5') {
        printf("\nEntre com a opção desejada:\n");
        printf("\n1) Inserir ficha:");
        printf("\n2) Procurar por nome:");
        printf("\n3) Listar toda a base:");
        printf("\n4) Excluir por nome:");
        printf("\n5) Sair\n\n");
        gets(opcao);
        
        if(opcao[0] == '1') /*inserir*/ {
            printf("\nEntre com um nome:");
            gets(agenda[proxima].nome);
            printf("\nEntre com um telefone:");
            gets(agenda[proxima].telefone);
            printf("\nEntre com um endereço:");
            gets(agenda[proxima].endereco);
            printf("\nEntre com um email:");
            gets(agenda[proxima].email);
            printf("\nEntre com uma data de nascimento:");
            gets(agenda[proxima].nascimento);
            printf("\nEntre com um nome:");
            agenda[proxima].ativo = true;
            fichas_existentes++;
            proxima++;
        }
        
        if(opcao[0] == '2') /*procurar*/ {
            char procurado[40];
            printf("\nEntre com o nome procurado:");
            gets(procurado);
            int i = procurar(procurado, agenda, fichas_existentes);
            if(i != -1) {
                printf("Nome: %s\nTelefone: %s\nEndereço:%s\nemail: %s\nData de nascimento:%s\n\n", 
                    agenda[i].nome, agenda[i].telefone, agenda[i].endereco, agenda[i].email, agenda[i].nascimento);
            }
            else
            printf("\n\nNome não encontrado\n");
        }
        
        if(opcao[0] == '3') /*listar tudo*/ {
            printf("\n\n");
            int i;
            for(i=0; i<fichas_existentes; i++) {
                if(agenda[i].ativo)
                    printf("Nome: %s\nTelefone: %s\nEndereço:%s\nemail: %s\nData de nascimento:%s\n\n", 
                    agenda[i].nome, agenda[i].telefone, agenda[i].endereco, agenda[i].email, agenda[i].nascimento);
            }
            if(fichas_existentes == 0)
                printf("A base de dados está vazia!\n");
        }
        
        if(opcao[0] == '4') /*excluir*/ {
            char procurado[40];
            printf("\nEntre com o nome que sera excluído:");
            gets(procurado);
            int i = procurar(procurado, agenda, fichas_existentes);
            if(i != -1) {
                printf("\n\nTodos os dados de %s serão removidos\n", agenda[i].nome);
                agenda[i].ativo = false;
            }
            else
            printf("\n\nNome não encontrado\n");
        }
    }
    return 0;
}

