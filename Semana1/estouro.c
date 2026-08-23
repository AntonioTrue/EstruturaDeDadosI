#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf(" %d",&n);
    int *p = malloc(n * sizeof(int));
    
/*    if(p==NULL){
        printf("Sem memória\n");
        exit(1);
    }
*/
    for(int i = 0; i < n; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf(" %d", &p[i]);
    }

    return 0;

}
