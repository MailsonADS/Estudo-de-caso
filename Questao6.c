#include <stdio.h>;

int main(){ //inicio do algoritmo

    int valor1, valor2;//declarando a variavel do tipo inteiro (numero inteiro)

    printf ("Digite os valores para verificacao de tamanho: ");//sa�da na tela para ilustrar o que vai ser pedido em seguida

    scanf("%d",&valor1);//solicitando a entrada com o primeiro valor

    scanf("%d",&valor2);//solicitando a entrada com o segundo valor

    if(valor1 > valor2){ //inicio da estrutura de decis�o
        printf("%d eh maior que %d!!", valor1,valor2); //sa�da se for verdadeiro
    }else {
        printf("%d eh menor que %d!!", valor1,valor2);//sa�da se for falso
    } //fim da estrutura de decis�o

}//fim do algoritmo
