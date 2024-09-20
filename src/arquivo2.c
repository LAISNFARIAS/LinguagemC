#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char *label_nome = "Nome: ";
  char *label_email = "E-mail: ";
  char *label_telefone = "Telefone ";
  char *label_idade = "Idade ";

  char input_nome[30];
  char input_email[50];
  char input_telefone[15];
  char input_idade[4];

//Ponteiro que armazena o endereço de memória do arquivo
FILE *cadastro;
cadastro = fopen("files/cadastro.txt","a+");

printf("Digite seu nome completo:\n");
fgets(input_nome,30,stdin);

printf("Digite o seu e-mail:\n");
fgets(input_email,50,stdin);

printf("Digite seu telefone:\n");
fgets(input_telefone,15,stdin);

printf("Digite sua idade:\n");
fgets(input_idade,4,stdin);


// Posicionar o cursor ao final da linha
fseek(cadastro,0, SEEK_END);
fputs(label_nome, cadastro);
fputs(input_nome,cadastro);


fseek(cadastro,0,SEEK_END);
fputs(label_email,cadastro);
fputs(input_email,cadastro);


fseek(cadastro,0,SEEK_END);
fputs(label_telefone, cadastro);
fputs(input_telefone,cadastro);


fseek(cadastro,0,SEEK_END);
fputs(label_idade, cadastro);
fputs(input_idade,cadastro);

fseek(cadastro, 0, SEEK_END);
fputs("----------------------------------------------------------------\n",cadastro);
fclose(cadastro);
printf("\n Dados cadastrados com sucesso!\n");

return 0;
}