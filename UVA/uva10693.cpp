#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main (){
double L,f,v,x;
while(1)
{
    cin>>L>>f;
    if(L==0 &&f==0)break;
    v=sqrt(2*L*f);
    x=3600/((L*2)/v);
    printf("%.8lf %.8lf\n",v,x);


}
return 0;}
