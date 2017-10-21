#include<iostream>
#include<stdio.h>
using namespace std;
int main (){

int s,d,i,j;
cin>>d;
for(j=1;j<=d;j++)
{
    cin>>s;
    int a[s],h=0,l=0;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
       if(i!=0) {if(a[i]>a[i-1]){h++;}
        else if(a[i]<a[i-1]){l++;}}
    }
    printf("Case %d: %d %d\n",j,h,l);
}

return 0;}
