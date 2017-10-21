#include<stdio.h>

int main (){

    int a,y,x,m,d;
    scanf("%d",&a);
    y=a/365;
    x=a%365;

    m=x/30;
    d=x%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)",y,m,d);
    return 0;
}
