#include<iostream>
#include<cmath>
using namespace std;
int main (){

int c,t,n,x,y,a,b,i,j;
cin>>c;
for(i=1;i<=c;i++)
{
    cin>>t;
    cin>>n;
    for(j=0;j<t;j++)
    {
        cin>>x>>y>>a>>b;

        if((((x+y)%2)!=((a+b)%2))||a>n ||a<1 ||b<1 ||b>n){cout<<"no move"<<endl;}
        else if(a==x && b==y){cout<<"0"<<endl;}
        else if(abs(x-a)==abs(y-b)) {cout<<"1"<<endl;}
        else {cout<<"2"<<endl;}
    }

}
return 0;}

