#include<iostream>
#include<cmath>
using namespace std;
int main (){
int a,s,d,f,h,g,R,C;
while(1)
{
    cin>>a;
    if(a==0)break;
    R=0;C=0;
    s=sqrt(a);
    f=s*s;
    d=a-f;
    if(d==s+1){R=s+1;C=s+1;}
    else if(d==0)
    {
        if(s%2==0){R=s;C=1;}
        else {R=1;C=s;}
    }
    else if (s%2==0)
    {
        if(d<=s){R=s+1;C=d;}
        else{R=1+(((s+1)*(s+1))-a);C=s+1;}
    }
    else if (s%2!=0)
    {
        if(d<=s){R=d;C=s+1;}
        else{R=s+1;C=1+(((s+1)*(s+1))-a);}
    }
    cout<<R<<" "<<C<<endl;

}
return 0;}
