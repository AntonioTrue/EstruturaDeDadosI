#include <stdio.h>

int f1(int n){
    /* Retorna a quantidade de números naturais pares menores ou iguais a n */
    if (n<=0) return 1;
    if (n % 2 == 0)
        return 1 + f1(n - 2); //Por que n - 2?
    else
        return f1(n - 1); //Por que n - 1? 
} 

int f2(int n){
    /* Retorna a soma dos números naturais menores ou iguais a n */
    return (n == 0) ? 0 : (n + f2(n - 2)); // Operador ternário em C
}

int main() {
    printf("f1(%d) = %d\n", 10, f1(10));
    printf("f2(%d) = %d\n", 10, f2(10));
    return 0;
}
