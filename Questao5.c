#include <stdio.h>;

int main(){ //inicio do algoritmo

    int idade;//declarando a variavel do tipo inteiro (numero inteiro)

    printf ("Qual a sua idade? ");//saída na tela para ilustrar o que vai ser pedido em seguida

    scanf("%d",&idade);//solicitando a entrada com a idade

    if(idade >= 18){ //inicio da estrutura de decisão
        printf("Vc eh maior de idade!");//saída se for verdadeiro
    }else {
        printf("Vc eh menor de idade!");//saída se for falso
        }//fim da estrutura de decisão

} //fim do algoritmo
