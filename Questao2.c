#include <stdio.h>;

int main(){ //inicio do algoritmo

    float salario,salarioat,totalvendas; //declarando as variaveis do tipo float (numeros com decimais)

    char nome[30];//declarando a variavel do tipo char (caracteres)

    printf("digite nome do vendedor\n"); //sa�da na tela para ilustrar o que vai ser pedido em seguida

    scanf("%s",&nome); //solicitando a entrada com nome do vendedor

    printf("digite salario vendedor\n");//sa�da na tela para ilustrar o que vai ser pedido em seguida

    scanf("%f",&salario);//solicitando a entrada com o sal�rio do vendedor

    printf("digite total de vendas\n");//sa�da na tela para ilustrar o que vai ser pedido em seguida

    scanf("%f",&totalvendas);//solicitando a entrada com o total de vendas do vendedor

    salarioat=totalvendas*15/100; // calculo para a comiss�o

    printf("NOME VENDEDOR->%s\n",nome); // sa�da com o nome do vendedor

    printf("SALARIO FIXO->%.2f\n",salario); // sa�da com o salario fixo do vendedor

    printf("SALARIO FINAL->%.2f\n",salarioat+salario); // sa�da com o salario final do vendedor


} //fim do algoritmo

