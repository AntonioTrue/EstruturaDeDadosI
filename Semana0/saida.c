#include<math.h>
#include<stdio.h>
int main(){
    int p,q,r;
    scanf(" %d %d",&p,&q);
    r=(int)round(((float)p/q-(p/q))*q);
    printf("%d\n",r);
}
