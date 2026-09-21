#include<stdlib.h>
#include<stdio.h>

long long int fibonacci(long long int *l, int x){
    int i;
    for(i=2;i<x;i++) {
        l[i]=l[i-1]+l[i-2];
    }
    return l[i-1];
}

int main() {
    int x;
    long long int *fibo;

    scanf("%lld",&x);
    fibo=malloc(x*sizeof(long long int));

    fibo[0]=1;
    if(x>1) fibo[1]=1;

    printf("%lld\n",fibonacci(fibo,x));

}
