#include<stdio.h>

int main (){

int a,s,x=0,z;
scanf("%d %d",&a,&s);
while(x<s)
{
    x++;
    if(x%a!=0 && x!=s){ printf("%d_",x);}
    else if(x%a==0 && x!=s){printf("%d\n",x);}
    else if(x==s){printf("%d\n",x);}
}

return 0;
}
