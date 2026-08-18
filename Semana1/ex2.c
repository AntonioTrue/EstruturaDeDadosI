#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a;
    int n, i;
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("%p: %d\n", &(a[i]), a[i]);
    }
    return 0;
}
