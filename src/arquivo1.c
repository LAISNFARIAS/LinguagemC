#include <stdio.h>
// Para trabalhar com arquivos é necessário importar a biblioteca stdlib
#include <stdlib.h>
// importar a biblioteca de texto (string) para escrever em arquivos de texto
#include <string.h>

int main(){
    system("clear"); //limpa a tela do terminal
// Declaração da variável palavra com um ponteiro para guardar os caracteres que formam uma string
    char *palavra;
    char *label_nome = "Nome: ";
    printf("Digite o seu nome completo:\n");
    // scanf("%s", palavra); (não uso esse pois estou usando fgets)

    fgets(palavra, 20, stdin); //get(pegando alguma coisa); std(standard); in (input)
    // O comando fgets (f -> file | gets -> obter). Assim vamos obter o texto que o usuário
    //  está digitando no terminal.
    // Definimos também a quantidade de caracteres aceitos pelo fgets e o parâmetro stdin (std -> standard | in -> entrada)
    // Ele olha para a entrada padrão, que nesse caso é teclado pelo terminal.

    FILE *ar;
    ar = fopen("files/teste.txt", "a+"); // fopen=file open (abertura de arquivo); w = write
    fseek(ar,0,SEEK_END);//vai para o final da linha
    fputs(label_nome,ar); //põe a palavra dentro do arquivo (o que o usuário escreveu) 
    fputs(palavra, ar);

    printf("O arquivo está no endereço:%p\n",ar);
    fclose(ar);

    return 0;
}