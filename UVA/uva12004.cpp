#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

long long int n,x,i,j,count,p;
cin>>j;
for(i=1;i<=j;i++){
cin>>n;
count=(n*(n-1))/4;
if((n*(n-1))%4!=0){p=(n*(n-1))/2;printf("Case %lld: %lld/2\n",i,p); }
else{printf("Case %lld: %lld\n",i,count);}}
return 0; }
