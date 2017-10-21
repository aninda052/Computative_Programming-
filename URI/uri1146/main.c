#include<stdio.h>

int main(){

int a=1,s,d;
while(a>0)
{
    scanf("%d",&s);
    if(s==0){break;}
    for(d=1;d<=s;d++)
    {
        if(d!=s){printf("%d ",d);}
        else if(d==s){printf("%d\n",d);}
    }
}

return 0;
}
