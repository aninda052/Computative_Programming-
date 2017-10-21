#include<stdio.h>
int main (){

int a,s,d,f=1,x=0;
scanf("%d\n%d",&a,&s);
while(s<=a){scanf("%d",&s);}
while(f>0)
{
    f++;
    a++;
    x=x+a;
    if(x>s){break;}
}
printf("%d\n",f-1);
return 0;
}
