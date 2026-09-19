#include <stdio.h>

int qtdDigitos(int n) {//1000, 4
    if(n<10) return 1;

    return 1 + qtdDigitos(n / 10);
}

void main() {
    int n;

    scanf(" %d",&n);

    printf("%d\n",qtdDigitos(n));
}
