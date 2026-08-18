#include <stdio.h>

int main() {
    int *p;
    int c=15;
    p=&c;

    printf("Antes da alteração de 'p'\n");
    printf(" Valor de 'c': %d\n",c);
    printf("Valor de '*p': %d\n",*p);
    *p=*p+1;
    printf("Depois da alteração de 'p'\n");
    printf(" Valor de 'c': %d\n",c);
    printf("Valor de '*p': %d\n",*p);
    return 0;
}
