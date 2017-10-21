#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main (){
double xa,ya,xb,yb,xc,yc,a,b,c,p,h,k,r;
while(cin>>xa>>ya>>xb>>yb>>xc>>yc)
{
    a=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
    b=sqrt(pow(xc-xb,2)+pow(yc-yb,2));
    c=sqrt(pow(xa-xc,2)+pow(ya-yc,2));
    r=(a*b*c)/sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
    p=a+b+c;
    h=((a*xc)+(b*xa)+(c*xb))/p;
    k=((a*yc)+(b*ya)+(c*yb))/p;
   // printf("%.2f\n",p*2*3.141592653589793);
   printf("%.3f %.3f %.3f %.3f\n",a,b,c,p);
}
return 0;}

