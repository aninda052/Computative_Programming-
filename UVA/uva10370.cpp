#include<iostream>
#include<stdio.h>
using namespace std;
int main (){

int a,i,d,n,j;
double c,x,v,h;
cin>>a;
for(i=0;i<a;i++)
{
    cin>>d;
    int s[d];v=0;c=0;
    for(j=0;j<d;j++)
    {
        cin>>s[j];
        c=c+s[j];
    }
    h=c/d;
     for(n=0;n<d;n++)
    {
        if(s[n]>h){v++;}

    }
    x=(v*100)/d;
    printf("%.3f",x);
    cout<<"%"<<endl;

}
return 0;}
