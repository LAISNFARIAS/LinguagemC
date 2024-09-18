int maior_valor(int array[], int qtd){
    //  m é o maior valor do array que desejo descobrir
    int m = array[0];
    int i = 1;
    while (i <= qtd - 1){
        if(array[i] > m){
            m = array[i];
        }
        i++;
    }
    // o return m significa que o sistema vai retornar o valor de m 
    // indicando qual o maio número do array
return m;
}

int menor_valor(int array[], int qtd){
    //  m é o maior valor do array que desejo descobrir
    int m = array[0];
    int i = 1;
    while (i <= qtd - 1){
        if(array[i] < m){
            m = array[i];
        }
        i++;
    }
    // o return m significa que o sistema vai retornar o valor de m 
    // indicando qual o maio número do array
return m;
}