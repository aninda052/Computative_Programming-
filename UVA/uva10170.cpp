#include<iostream>
using namespace std;
int main (){

long long int s,d,i,j;
while(cin>>s>>d){
        j=0;
for(i=s;i<=d;i++)
{
    j=j+i;
    if(j>=d){break;}
}
cout<<i<<endl;}
return 0;}
