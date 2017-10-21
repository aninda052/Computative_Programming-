#include<stdio.h>
#include <stdlib.h>
int main (){
    int a,b,mir,c,x;
    scanf("%d %d %d",&a,&b,&c);
    x=(a+b+abs(a-b))/2;
    mir=(x+c+abs(x-c))/2;
    printf("%d eh o maior\n",mir);
    return 0;
}
