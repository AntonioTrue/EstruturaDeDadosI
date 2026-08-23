#include<stdio.h>
#include<stdlib.h>
/*void alocacao(){
    int *p = malloc(100*sizeof(int));
    int *q = malloc(100*sizeof(int));

    q=p;

}

int *primos(){
    int v[3];
    //int *v=malloc(3*sizeof(int));
    v[0] = 1009; v[1] = 1013; v[2] = 1019;
    return v;
}
*/

void(teste(void){
    int i;
    int *p;
    int *q;
    p=malloc(100*sizeof(int));
    q=p;
    free(q);
    for(i=0;i<100;i++){
        p[i]=i+1~;
    }
}

int main(){
//    alocacao();
/*    int *r;
    int i;
    r=primos();
    for(i=0;i<3;i++){
        printf("%d\n",r[i]);
    }*/
    
}
