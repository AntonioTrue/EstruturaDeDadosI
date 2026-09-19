#include <stdio.h>

int somaPar(int n) {
    if(n==2) return 2;

    if(n%2==1) return somaPar(n-1);

    else return n+somaPar(n-1);
}

int main() {
    int n;

    scanf(" %d", &n);

    printf("%d\n",somaPar(n));
}
