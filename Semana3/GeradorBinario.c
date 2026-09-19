#include<stdio.h>
#include<stdlib.h>

void imprime(int *lista, int termo){
    int i;
    for(i=0;i<termo;i++){
        printf("%d",lista[i]);
    }
    printf("\n");
}

void gerador(int *lista, int termo, int posicao){
    if(posicao==termo){
        imprime(lista,termo);
        return;
    }

    lista[posicao]=0;
    gerador(lista,termo,posicao+1);
    lista[posicao]=1;
    gerador(lista,termo,posicao+1);
}

void main(){
    int *lista;
    int posicao=0,termo;

    printf("Insira o tamanho da sequencia: ");
    scanf("%d",&termo);

    lista=malloc(termo*sizeof(int));
    gerador(lista,termo,0);

    free(lista);

    return;
}
