#include <stdio.h>;

int main(){//inicio do algoritmo
    int valor, anteriores, posteriores;//declarando as variaveis do tipo inteiro (numero inteiro)
    printf("Digite o valor para verificacao: "); //sa�da na tela para ilustrar o que vai ser pedido em seguida
    scanf ("%d", &valor); //solicitando a entrada com o valor a ser verificado

    if(valor >=100 && valor <=200){ //inicio da estrutura de decis�o
        printf("Numero DENTRO do intervalo estabelecido!!"); //sa�da se for verdadeiro
    }else {
        printf("Numero FORA do intervalo estabelecido!!");//sa�da se for falso
    } //fim da estrutura de decis�o

    anteriores = valor - 20; //declarando a variavel dos numeros anteriores ao valor

    while(anteriores < valor){ //inicio do la�o de repeti��o
        printf(" %d ", anteriores); // sa�da com as informa��es do la�o
    anteriores = anteriores + 1;
    } //fim do la�o de repeti��o

    posteriores = valor + 20; //declarando a variavel dos numeros posteriores ao valor

    while(posteriores > valor){ //inicio do la�o de repeti��o
        printf(" %d ", posteriores);// sa�da com as informa��es do la�o
    posteriores = posteriores - 1;
    } //fim do la�o de repeti��o

}
