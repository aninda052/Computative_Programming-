#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main (){
double a,s,d,S,A,p,fast,sec,thi;
while(cin>>a>>s>>d)
{
    S=(a+d+s)/2;
    A=sqrt(S*(S-a)*(S-s)*(S-d));
    p=(a*s*d)/sqrt((a+s+d)*(a+s-d)*(s+d-a)*(d+a-s));
    thi=(A/S)*(A/S)*3.141592653589793;
    sec=A-thi;
    fast=(p*p*3.141592653589793)-A;
    printf("%.4f %.4f %.4f\n",fast,sec,thi);
}
return 0;}

