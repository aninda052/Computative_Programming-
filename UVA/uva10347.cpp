#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main (){

double a,s,d,x,f;
while(cin>>a>>s>>d)
{
    if(a+s<=d ||a+d<=s ||d+s<=a ){cout<<"-1.000"<<endl;}
    else {f=(a+s+d)/2;
    x=4*(sqrt(f*(f-a)*(f-s)*(f-d)))/3;
    printf("%.3f\n",x);}
}
return 0;}
