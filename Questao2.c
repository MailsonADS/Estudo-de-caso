#include <stdio.h>;

int main(){ //inicio do algoritmo

    float salario,salarioat,totalvendas; //declarando as variaveis do tipo float (numeros com decimais)

    char nome[30];//declarando a variavel do tipo char (caracteres)

    printf("digite nome do vendedor\n"); //saída na tela para ilustrar o que vai ser pedido em seguida

    scanf("%s",&nome); //solicitando a entrada com nome do vendedor

    printf("digite salario vendedor\n");//saída na tela para ilustrar o que vai ser pedido em seguida

    scanf("%f",&salario);//solicitando a entrada com o salário do vendedor

    printf("digite total de vendas\n");//saída na tela para ilustrar o que vai ser pedido em seguida

    scanf("%f",&totalvendas);//solicitando a entrada com o total de vendas do vendedor

    salarioat=totalvendas*15/100; // calculo para a comissão

    printf("NOME VENDEDOR->%s\n",nome); // saída com o nome do vendedor

    printf("SALARIO FIXO->%.2f\n",salario); // saída com o salario fixo do vendedor

    printf("SALARIO FINAL->%.2f\n",salarioat+salario); // saída com o salario final do vendedor


} //fim do algoritmo

