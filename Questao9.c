#include <stdio.h>
#define tamanho 10

int main(){
    int v[tamanho]; //declarando o tamanho do vetor

    printf("Digite %d valores: ", tamanho);//saída na tela para ilustrar o que vai ser pedido em seguida

    //lendo para o vetor
    for(int i=0; i< tamanho; i++){ //inicio da repetição que irá guardar as variaveis em sequencia dentro do vetor
        scanf("%d", &v[i]); //solicitando a entrada com as variaveis do vetor
    } //fim do laço de repetição

    //mostrando os valores
    printf("Os %d valores digitados foram: ", tamanho); //saída na tela para ilustrar o que vai ser pedido em seguida
     for(int i=0; i< tamanho; i++){ //inicio da repetição que irá mostrar os valores depositados no vetor
        printf("%d ", v[i]); //saída com os valores do vetor
    } //fim do laço de repetição

    int busca, contador; //buscando os valores presentes no vetor
    printf("\nDigite o numero a buscar: "); //saída na tela para ilustrar o que vai ser pedido em seguida
    scanf("%d", &busca); //solicitando a entrada com o nmr a ser buscado dentro do vetor

    contador = 0; //definindo um contador para determinar quantas vezes o nmr buscado está no vetor
    for(int i=0; i< tamanho; i++){ //inicio do laço de repetição
        //testando se o numero esta na posicao
        if(busca == v[i]){ //inicio da estrutura de decisão
            printf("\n\nACHOU O NUMERO NA POSICAO %d! \n", i); //saída caso verdadeiro
            contador++; //somando ao contador caso seja verdadeiro
        } //final da estrutura de decisão
    }//final do laço de repetição

    if(contador == 0) //inicio da estrutura de decisão
       printf("\nNUMERO NAO ENCONTRADO NO VETOR! \n"); //saída caso o nmr não esteja no vetor
     else {
        printf("\nAchou o numero %d vez(es) \n", contador); //saída caso o nmr tenha sido localizado no vetor
     }//fim da estrutura de decisão

} //fim do algoritmo
