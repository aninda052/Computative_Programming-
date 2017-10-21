#include<iostream>
#include<cmath>
using namespace std;
int main(){

int a,b,c;
while(1)
{
    cin>>a>>b;
    if(a==-1 && b==-1){break;}
    c=abs(a-b);
    if(c>50){cout<<100-c<<endl;}
    else{cout<<c<<endl;}
}
return 0;}
