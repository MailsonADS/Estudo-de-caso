#include <stdio.h>;

int main(){ //inicio do algoritmo

    int idade;//declarando a variavel do tipo inteiro (numero inteiro)

    printf ("Qual a sua idade? ");//sa�da na tela para ilustrar o que vai ser pedido em seguida

    scanf("%d",&idade);//solicitando a entrada com a idade

    if(idade >= 18){ //inicio da estrutura de decis�o
        printf("Vc eh maior de idade!");//sa�da se for verdadeiro
    }else {
        printf("Vc eh menor de idade!");//sa�da se for falso
        }//fim da estrutura de decis�o

} //fim do algoritmo
