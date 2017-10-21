#include<iostream>
#include<cmath>
using namespace std;
int main (){
int n,s,d,i;
cin>>d;
for(i=0;i<d;i++)
{
cin>>n;
s=(((((n*63+7492)*235)/47)-498)/10)%10;
cout<<abs(s)<<endl;}
return 0;}
