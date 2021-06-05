#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>

struct ficha{
char nome[40];
char telefone[20];
};

int main()
{
struct ficha agenda[100];
int fichas_existentes = 0, proxima = 0;
char opcao[10]="0";
        setlocale(LC_ALL, "Portuguese");

while(opcao[0] != '5')
{

printf("\nEntre com a opção desejada:\n");
printf("\n1) Inserir ficha:");
printf("\n2) Procurar por nome:");
printf("\n3) Listar toda a base:");
printf("\n4) Excluir por nome:");
printf("\n5) Sair\n\n");
gets(opcao);

if(opcao[0] == '1') //inserir
{
printf("\nEntre com um nome:");
gets(agenda[proxima].nome);
printf("\nEntre com um telefone:");
gets(agenda[proxima].telefone);
fichas_existentes++;
proxima++;
}
if(opcao[0] == '2') //procurar
{
char procurado[40];
printf("\nEntre com o nome procurado:");
gets(procurado);

bool achei = false; //nao achei
int i;
for(i=0; i<fichas_existentes; i++)
{
 //Ignorando Maiusculas/Minusculas:
 //if(strcasecmp(procurado, agenda[i].nome) == 0)
 if(strcmp(procurado, agenda[i].nome) == 0)
 {
   achei = true; //achei!!
   printf("\n\nO telefone de %s é %s\n",
     agenda[i].nome, agenda[i].telefone);
   //depois de achar nao preciso procurar mais
   break;
 }
}
if(achei == false)
{
 printf("\n\nNome não encontrado\n");
}
}
if(opcao[0] == '3') //listar tudo
{
printf("\n\n");
int i;
for(i=0; i<fichas_existentes; i++)
{
   printf("O telefone de %s é %s\n",
     agenda[i].nome, agenda[i].telefone);
}
if(fichas_existentes == 0)
printf("A base de dados está vazia!\n");
}
if(opcao[0] == '4') //excluir
{
char procurado[40];
printf("\nEntre com o nome que sera excluído:");
gets(procurado);

bool achei = false; //nao achei
int i;
for(i=0; i<fichas_existentes; i++)
{
 //Ignorando Maiusculas/Minusculas:
 //if(strcasecmp(procurado, agenda[i].nome) == 0)
 if(strcmp(procurado, agenda[i].nome) == 0)
 {
   achei = true; //achei!!
   printf("\n\nO telefone de %s, que é %s, será removido\n", agenda[i].nome, agenda[i].telefone);
   int j;
   for(j=i+1; j<fichas_existentes; j++)
   {
agenda[j-1] = agenda[j];
   }
   fichas_existentes--;
   proxima--;
   break;
 }
}
if(achei == false)
{
 printf("\n\nNome não encontrado\n");
}
}
}
return 0;
}
