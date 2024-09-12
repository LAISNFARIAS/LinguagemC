#include <stdio.h>

int main(){

    float n1, n2, n3, n4, nf;
    printf("Digite a primeira nota do estudante:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota do estudante:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota do estudante:\n");
    scanf("%f", &n3);
    printf("Digite a quarta nota do estudante:\n");
    scanf("%f", &n4);
    nf = (n1+n2+n3+n4)/4;

    /*Para alunos com média maior ou igual a 6, aprovado.
      Para alunos com média maior ou igual a 4, reprovado.
      Para os demais com notas entre maior que 4 e menor que 6, recuperação.    
    */

    if(nf >= 6.0){
        printf("Aluno aprovado com nota final: %.2f\n", nf);
        }
    else if (nf <= 4){ 
        printf("Aluno reprovado com nota final:%.2f\n", nf);
    }
    else{
        printf("Aluno em recuperação com nota final: %.2f\n",nf);

    }
    return 0;
}
