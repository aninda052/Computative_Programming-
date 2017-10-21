#include<iostream>
#include<cmath>
using namespace std;
int main (){

int x,y,a,b;
while(cin>>x>>y>>a>>b)
{
    if(x==0 &&y==0 && a==0 &&b==0){break;}
    else if(a==x && b==y){cout<<"0"<<endl;}
    else if(x==a || y==b ||(abs(x-a)==abs(y-b))) {cout<<"1"<<endl;}
    else {cout<<"2"<<endl;}

}
return 0;}


