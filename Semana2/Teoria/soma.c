#include <stdio.h>
int soma(int n){
    if(n==0) return 0;

    return n+soma(n-1);
}

void main(){
    int n;

    scanf(" %d", &n);
    printf("%d\n", soma(n));
}
