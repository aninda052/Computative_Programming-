#include<stdio.h>
#include <stdlib.h>

int main(){
int a,b,c,d=0;
scanf("%d %d",&a,&b);
c=(a+b+(abs(a-b)))/2;
if(c==a)
{
    if(a%2==0)
    {
            for(a-=1;a>=b;a-=2)
            {
            ++d;
            }
            printf("%d",d);
    }
    else
    {
         for(a-=2;a>=b;a-=2)
            {
            ++d;
            }
            printf("%d",d);
    }
}
else
{
    for(b=b;b>=a;b-=2)
    {
    ++d;
    }

    printf("%d",d);
}
return 0;
}
