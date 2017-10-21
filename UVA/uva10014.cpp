#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
    int z,x,c;
    double a,s,d,f,sum,y;
    cin>>z;
    for(int i=0;i<z;i++)
    {
        cin>>x>>a>>s;
        sum=0;
        for(int j=0;j<x;j++)
        {
            cin>>d;
            sum +=d;
        }
        if(a<s){y=a+((s-a)/(x+1)*2);}
        else {y=a-((a-s)/(x+1)*2);}
        printf("%.2lf\n",((a+y)/2)-sum);
    }
return 0;}
