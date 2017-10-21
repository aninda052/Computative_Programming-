#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main (){
double a,s,d;
while(cin>>a>>s>>d)
{
    if(a==0 || s==0 ||d==0){printf("The radius of the round table is: 0.000\n");}
   else {double S,A;
    S=(a+d+s)/2;
    A=sqrt(S*(S-a)*(S-s)*(S-d));
    printf("The radius of the round table is: %.3f\n",A/S);}
}
return 0;}
