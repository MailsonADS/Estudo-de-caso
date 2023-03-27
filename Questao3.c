#include <stdio.h>;

int main(){ //inicio do algoritmo

    float cotacao_dolar, quantidade_dolar, valor_real; //declarando as variaveis do tipo float (numeros com decimais)

    printf("Informe a cotacao do dolar: ");//saída na tela para ilustrar o que vai ser pedido em seguida

    scanf("%f",&cotacao_dolar); //solicitando a entrada com a cotação atual do dólar

    printf("Informe a quantidade de dolares a serem convertidos: ");//saída na tela para ilustrar o que vai ser pedido em seguida

    scanf("%f",&quantidade_dolar); //solicitando a entrada com a quantidade de dólares a serem convertidos em reais

    valor_real=cotacao_dolar*quantidade_dolar; //calculo de conversão de dólar para real

    printf("Voce tem um total de R$: %f ",valor_real); //saída com o resultado da conversão

} //fim do algoritmo
