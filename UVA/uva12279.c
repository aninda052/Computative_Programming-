
#include<stdio.h>
int main (){

int a=1,s,d;
int x[1000];
while(a<=75)
{
    scanf("%d",&s);
    if(s==0){break;}
    int f=0,g=0;
    for(d=0;d<s;d++)
    {
        scanf("%d",&x[d]);
        if(x[d]==0){f++;}
        else {g++;}
    }
    printf("Case %d: %d\n",a,g-f);
    a++;
}
return 0;
}
