#include<stdio.h>

int gcd(int,int);

int main(){
    int p,q,r;
    scanf(" %d %d", &p,&q);
    r=gcd(p,q);
    printf("%d\n",r);
    return 0;
}

int gcd(int p, int q){
    if(q==0) return p;
    int r=p%q;
    return gcd(q,r);
}
