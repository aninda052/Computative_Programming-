#include<iostream>
using namespace std;
int main (){

int n,b,h,w,p,o,i,j,x=0,y;
while(cin>>n>>b>>h>>w)
{
    y=3000000;
    for(i=0;i<h;i++)
    {
        cin>>p;
        for(j=0;j<w;j++)
        {
            cin>>o;
            if(o>=n){x=n*p;if(x<y){y=x;} }
        }
    }
    if(y>b){cout<<"stay home"<<endl;}
    else{cout<<y<<endl;}
}
return 0;}
