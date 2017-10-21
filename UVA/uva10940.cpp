#include<bits/stdc++.h>
using namespace std;
int main(){
int a,s,d;

while(1)
{
    cin>>a;
    if(a==0){break;}
    double z=log(a)/log(2);
    s=z;
    if(s==z){cout<<a<<endl;}
    else if(a%2==0){cout<<(a-pow(2,s))*2<<endl; }
    else
    {
        d=((((a-pow(2,s))/2)+1)*4)-4;

        cout<<d<<endl;
    }

}

return 0;}
