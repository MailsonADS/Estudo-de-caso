#include <stdio.h>
#define tamanho 10

int main(){
    int v[tamanho]; //declarando o tamanho do vetor

    printf("Digite %d valores: ", tamanho);//sa�da na tela para ilustrar o que vai ser pedido em seguida

    //lendo para o vetor
    for(int i=0; i< tamanho; i++){ //inicio da repeti��o que ir� guardar as variaveis em sequencia dentro do vetor
        scanf("%d", &v[i]); //solicitando a entrada com as variaveis do vetor
    } //fim do la�o de repeti��o

    //mostrando os valores
    printf("Os %d valores digitados foram: ", tamanho); //sa�da na tela para ilustrar o que vai ser pedido em seguida
     for(int i=0; i< tamanho; i++){ //inicio da repeti��o que ir� mostrar os valores depositados no vetor
        printf("%d ", v[i]); //sa�da com os valores do vetor
    } //fim do la�o de repeti��o

    int busca, contador; //buscando os valores presentes no vetor
    printf("\nDigite o numero a buscar: "); //sa�da na tela para ilustrar o que vai ser pedido em seguida
    scanf("%d", &busca); //solicitando a entrada com o nmr a ser buscado dentro do vetor

    contador = 0; //definindo um contador para determinar quantas vezes o nmr buscado est� no vetor
    for(int i=0; i< tamanho; i++){ //inicio do la�o de repeti��o
        //testando se o numero esta na posicao
        if(busca == v[i]){ //inicio da estrutura de decis�o
            printf("\n\nACHOU O NUMERO NA POSICAO %d! \n", i); //sa�da caso verdadeiro
            contador++; //somando ao contador caso seja verdadeiro
        } //final da estrutura de decis�o
    }//final do la�o de repeti��o

    if(contador == 0) //inicio da estrutura de decis�o
       printf("\nNUMERO NAO ENCONTRADO NO VETOR! \n"); //sa�da caso o nmr n�o esteja no vetor
     else {
        printf("\nAchou o numero %d vez(es) \n", contador); //sa�da caso o nmr tenha sido localizado no vetor
     }//fim da estrutura de decis�o

} //fim do algoritmo
