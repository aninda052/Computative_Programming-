#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main (){
double a,d,u,v;
cin>>a;
for(int i=1;i<=a;i++)
{
    cin>>d>>v>>u;
    if(v==0||v>=u||u==0){printf("Case %d: can't determine\n",i);}
  else {
    double t1,t2;
    t1=d/u;
    t2=d/(sqrt(u*u-v*v));
    printf("Case %d: %.3f\n",i,abs(t1-t2));}
}
return 0;}
