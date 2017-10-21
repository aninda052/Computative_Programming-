#include<bits/stdc++.h>
using namespace std;
int main (){
long long int a,x;
while(cin>>a&&a!=0)
{
    if(a==-1||a==1)cout<<a<<" = "<<a<<endl;
    else{
    x=a;
    int i=2;
    cout<<a<<" = ";
    if(a<0){cout<<"-1 x ";a=a*(-1);x=a;}
    while(i<=sqrt(x))
    {
        if(a%i==0){a/=i,cout<<i;if(a!=1)cout<<" x ";}
        else {i++;}
        if(a==2||a==3||a==5||a==7 ||a==1){ break;}
       // if(i>sqrt(x))break;
       // cout<<;
    }

    if(a!=1)cout<<a;
    cout<<endl;}
}
return 0;}
