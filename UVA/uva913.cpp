#include<iostream>
using namespace std;
int main (){
long long int a,b,n,sum;
while(cin>>n){
a=n-1;
b=a/2;
sum=((((a*b)+1)+((n-3)*2))*3)+6;
cout<<sum<<endl;}
return 0;}
