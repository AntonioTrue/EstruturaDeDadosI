#include<stdio.h>
#include<stdlib.h>

void labirinto(char **lab, int nl, int nc){












    labirinto(lab, nl+1, nc);
    labirinto(lab, nl-1, nc);
    labirinto(lab, nl, nc+1);
    labirinto(lab, nl, nc-1);
    return;
}

void main(){
    int nl=0, nc=0, tam,i;
    char **lab;

    printf("Insira o tamanho do labirinto: ");
    scanf(" %d", &tam);
    
    lab=malloc(tam*sizeof(char*));
    for(i=0;i<tam;i++){
        lab[i]=malloc(tam*sizeof(char));
    }

    labirinto(lab,nl,nc);
}
