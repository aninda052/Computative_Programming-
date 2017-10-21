#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
long long int a,b,s,z,c,x,temp=0,m,n;
while(cin>>a>>b){
m=a;n=b;z=0;
if(a>b){temp=a;a=b;b=temp;}
for(c=a;c<=b;c++)
{
x=0;
s=c;
while(s!=1)
    {

        if (s%2==0){s=s/2;}
        else{s=(3*s)+1;}
        x++;
    }
    temp=x+1;
    if(z<temp){z=temp;}

}
printf("%lld %lld %lld\n",m,n,z);}
return 0;
}

