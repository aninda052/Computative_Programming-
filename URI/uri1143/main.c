#include<stdio.h>

int main(){

int a,b,c=0,d;
scanf("%d",&a);
for(b=1;b<=a;b++)
{
    c=b*b;
    d=b*b*b;
    printf("%d %d %d\n",b,c,d);
    printf("%d %d %d\n",b,c+1,d+1);}
return 0;
}
