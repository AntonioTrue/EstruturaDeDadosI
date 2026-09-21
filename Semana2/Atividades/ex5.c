#include <stdio.h>

void imprime(char s[]){
    if (s[0] == '\0' || s[0] == '\n'){
        printf("\n");
        return;
    }
    printf("%c", s[0]);
    imprime(&s[1]);
    printf("%c", s[0]);
}

int main() {
    char msg[257];
    fgets(msg, 256, stdin); //ou scanf("%100[^\n]%*c",msg);
    imprime(msg);
    printf("\n");
    return 0;
}
