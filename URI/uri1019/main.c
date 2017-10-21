#include<stdio.h>

int main(){

    int N,H,i,M,S;
    scanf("%d",&N);
    H=N/3600;
    i=N%3600;

    M=i/60;
    S=i%60;
    printf("%d:%d:%d\n",H,M,S);

    return 0;
}
