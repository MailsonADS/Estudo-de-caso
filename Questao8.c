#include <stdio.h>;

int main(){ //inicio do algoritmo
    char nome[30]; //declarando a variavel do tipo char (caracteres)
    float nota1, nota2, nota3, soma, media; //declarando as variaveis do tipo float (numeros com decimais)
    printf("Informe o nome do aluno: "); //saída na tela para ilustrar o que vai ser pedido em seguida
    scanf("%s",&nome);//solicitando a entrada com o nome do aluno
    printf("Informe as notas do aluno: ");//saída na tela para ilustrar o que vai ser pedido em seguida
    scanf("%f",&nota1); //solicitando a entrada com a primeira nota
    scanf("%f",&nota2);//solicitando a entrada com a segunda nota
    scanf("%f",&nota3);//solicitando a entrada com a terceira nota
    soma=nota1+nota2+nota3; //soma das notas
    media=soma/3;//calculo da media

    if (media >= 7){ //inicio da estrutura de decisão
        printf("O aluno %s atingiu a media %f e foi aprovado!!! ", nome, media); //saída se a primeira condição for verdadeira
    }if (media <= 5){
        printf("O aluno %s atingiu a media %f e foi reprovado!!! ", nome, media);//saída se a segunda condição for verdadeira
    }else {
        printf("O aluno %s atingiu a media %f e ficou de recuperacao!!! ", nome, media); //saída se ambas forem falsas
    } //fim da estrutura de decisão

} //fim do algoritmo
