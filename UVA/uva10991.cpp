#include<iostream>
#include<cmath>
#include<stdio.h>
#define pi 3.14159265
using namespace std;
int main (){

int k ,i;
cin>>k;
for(i=0;i<k;i++)
{
    double r1,r2,r3,a,b,c,s,A,x,y,z,thita1,thita2,thita3;
    cin>>r1>>r2>>r3;
    a=r1+r2;
    b=r2+r3;
    c=r3+r1;
    thita1=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
    thita2=acos(((c*c)+(b*b)-(a*a))/(2*c*b));
    thita3=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
    x=(r1*r1)*(thita3/2);
    y=(r2*r2)*(thita1/2);
    z=(r3*r3)*(thita2/2);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.6f\n",A-(x+z+y));
}
return 0;
}
