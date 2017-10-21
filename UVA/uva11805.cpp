#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
int t,n,k,p,i;
cin>>t;
for(i=1;i<=t;i++)
{
    cin>>n>>k>>p;
    if((k+p)%n!=0){printf("Case %d: %d\n",i,(k+p)%n);}
    else {printf("Case %d: %d\n",i,n);}

}
return 0;}
