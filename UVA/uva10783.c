#include<stdio.h>
int main (){

int a,s,d,f,g,x,y;
scanf("%d",&a);
for(s=1;s<=a;s++)
{
    scanf("%d %d",&f,&g);
    if(f%2==0){f=f+1;}
    y=0;
    for(x=f;x<=g;x=x+2)
    {
        y=y+x;
    }
    printf("Case %d: %d\n",s,y);
}
return 0;}
