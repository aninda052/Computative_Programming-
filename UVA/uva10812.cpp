#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
int a,s,d,f,g;
cin>>a;
for(s=0;s<a;s++)
{
    cin>>d>>f;
    if((d+f)%2!=0 || d<f){printf("impossible\n");}
    else{printf("%d %d\n",(d+f)/2,((d+f)/2)-f);}

}
return 0;}
