#include <stdio.h>;

int main(){ //inicio do algoritmo

    float cotacao_dolar, quantidade_dolar, valor_real; //declarando as variaveis do tipo float (numeros com decimais)

    printf("Informe a cotacao do dolar: ");//sa�da na tela para ilustrar o que vai ser pedido em seguida

    scanf("%f",&cotacao_dolar); //solicitando a entrada com a cota��o atual do d�lar

    printf("Informe a quantidade de dolares a serem convertidos: ");//sa�da na tela para ilustrar o que vai ser pedido em seguida

    scanf("%f",&quantidade_dolar); //solicitando a entrada com a quantidade de d�lares a serem convertidos em reais

    valor_real=cotacao_dolar*quantidade_dolar; //calculo de convers�o de d�lar para real

    printf("Voce tem um total de R$: %f ",valor_real); //sa�da com o resultado da convers�o

} //fim do algoritmo
