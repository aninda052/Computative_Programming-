#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){

int a ,s,d,f,i,j,temp,x,l=0,temp1,v,b;
double g[100000];
cin>>a;
for(s=0;s<a;s++)
{
    cin>>d;
    for(f=0;f<d;f++){cin>>g[f];}
    for(i=0;i<d-1;i++)
    {
        for(j=i+1;j<d;j++)
        {
            if(g[i]>g[j])
            {
                temp=g[i];
                g[i]=g[j];
                g[j]=temp;
            }

        }
    }
    double y=0.00;

    for(x=d-1;x>=0;x--)
    {
        if(g[x]+g[x-1]>g[x-2]&&g[x]+g[x-2]>g[x-1]&&g[x-2]+g[x-1]>g[x])
        {
            double s=(g[x]+g[x-1]+g[x-2])/2;
            double A=sqrt(s*(s-g[x])*(s-g[x-1])*(s-g[x-2]));
            y=max(y,A);
        }

    }

    printf("%.2f\n",y);

}
return 0;}

