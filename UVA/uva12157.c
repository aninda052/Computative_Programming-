#include<stdio.h>
int main (){

int a,d,s,f,g,m,j,x,y,b,n;
scanf("%d",&a);
for(d=1;d<=a;d++)
{
    b=0;n=0;
    scanf("%d",&s);
    for(f=0;f<s;f++)
    {
        scanf("%d",&g);
        x=0;m=0;
        while(x<=g)
        {
            x=x+30;
            m++;
        }
        y=0;j=0;
        while(y<=g)
        {
            y=y+60;
            j++;
        }

b=b+(m*10);
n=n+(15*j);
    }
if(b<n){printf("Case %d: Mile %d\n",d,b);}
else if (b==n){printf("Case %d: Mile Juice %d\n",d,n);}
else{printf("Case %d: Juice %d\n",d,n);}


}
return 0;
}
