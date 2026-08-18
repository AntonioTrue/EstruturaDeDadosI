#include<stdio.h>
#include<stdlib.h>
struct no {
    int valor;
    struct no *prox;
};
typedef struct no No;

typedef struct{
    No *inicio;
} Lista;

void imprimirLista(Lista *l){
    No *aux;
    aux=l->inicio;
    if(aux==NULL){
        printf("LISTA VAZIA\n");
    }else{
        while (aux != NULL){
            printf("%i\n",aux->valor);
            aux=aux->prox;
        }
    }
}

void main() {
    No *no1, *no2;
    Lista l;

    no1=malloc(sizeof(No));
    no2=malloc(sizeof(No));

    no1->valor=10;
    no2->valor=20;
    no1->prox=no2;
    no2->prox=NULL;
    l.inicio=no1;
    imprimirLista(&l);
}
