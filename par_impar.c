#include <stdio.h>

int main(){
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("O número é Par\n");
     }
    else{
        printf("O número é Ímpar\n");

    }
return 0;
}