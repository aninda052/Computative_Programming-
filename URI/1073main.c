#include<stdio.h>

int main(){
int a,s,d;
scanf("%d",&a);
for(s=2;s<=a;s=s+2)
{
    d=s*s;
    printf("%d^2 = %d\n",s,d);
}
return 0;
}
