#include <stdio.h>;

int main(){//inicio do algoritmo
    int valor, anteriores, posteriores;//declarando as variaveis do tipo inteiro (numero inteiro)
    printf("Digite o valor para verificacao: "); //saída na tela para ilustrar o que vai ser pedido em seguida
    scanf ("%d", &valor); //solicitando a entrada com o valor a ser verificado

    if(valor >=100 && valor <=200){ //inicio da estrutura de decisão
        printf("Numero DENTRO do intervalo estabelecido!!"); //saída se for verdadeiro
    }else {
        printf("Numero FORA do intervalo estabelecido!!");//saída se for falso
    } //fim da estrutura de decisão

    anteriores = valor - 20; //declarando a variavel dos numeros anteriores ao valor

    while(anteriores < valor){ //inicio do laço de repetição
        printf(" %d ", anteriores); // saída com as informações do laço
    anteriores = anteriores + 1;
    } //fim do laço de repetição

    posteriores = valor + 20; //declarando a variavel dos numeros posteriores ao valor

    while(posteriores > valor){ //inicio do laço de repetição
        printf(" %d ", posteriores);// saída com as informações do laço
    posteriores = posteriores - 1;
    } //fim do laço de repetição

}
