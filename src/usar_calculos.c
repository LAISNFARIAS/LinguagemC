#include <stdio.h>
#include "../lib/calculos.h"

int main(){
    int numeros[8]= {7,12,8,45,31,52,102,34};

    printf("A somas dos números pe %d\n", soma(numeros,8));
    printf("A média dos números é %d\n",media(numeros,8));
    printf("Os números pares do array são\n");
    pares(numeros,8); //dentro desse pares tem um printf no arquivos calculos.h
    return 0;
}