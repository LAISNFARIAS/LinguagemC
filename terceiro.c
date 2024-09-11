
#include <stdio.h>
#define PI 3.14159

int main(){

float raio, area;
printf("Digite o valor do raio do círculo\n");
scanf("%f", &raio);
printf("O raio digitado é %12.2f\n",raio);
area=PI*raio*raio;
printf("Área do círculo com raio %f é %f\n", raio, area);
return 0;



}