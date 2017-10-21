#include<stdio.h>
int main (){

int a,s,d,f,g;
scanf("%d",&a);
for(s=1;s<=a;s++)
{
    scanf("%d %d %d",&d,&f,&g);
    if(d<=20 && f<=20 && g<=20){printf("Case %d: good\n",s);}
    else {printf("Case %d: bad\n",s);}
}
return 0;
}
