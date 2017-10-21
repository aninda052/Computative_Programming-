#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

int a,t,temp,i,j,count,n,d[11],c;
cin>>t;
for(n=1;n<=t;n++)
{
cin>>c;
for(i=0;i<c;i++)
{
    cin>>d[i];

}
for(i=0;i<c-1;i++)
{
    for(j=i+1;j<c;j++)
    {
        if(d[i]>d[j])
        {
            temp=d[i];
            d[i]=d[j];
            d[j]=temp;

        }

    }
}
printf("Case %d: %d\n",n,d[c/2]); }
return 0;}

