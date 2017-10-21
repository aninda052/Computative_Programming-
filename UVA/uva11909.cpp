#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main (){
double l,w,h,i,k;
while(cin>>l>>w>>h>>k)
{

    double pac,A,y,S,Tri,x;
    pac=l*w*h;
    x=cos(k*(3.14159265/180));
    A=l/x;
    y=sqrt(pow(A,2)-pow(l,2));
    Tri=y*l*.5*w;
    if(y<=h){printf("%.3f mL\n",pac-Tri);}

    else{
            x=cos((90-k)*(3.14159265/180));
            A=h/x;
            y=sqrt(pow(A,2)-pow(h,2));
            Tri=y*h*.5*w;
            printf("%.3f mL\n",Tri);}

}
return 0;}
