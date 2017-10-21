#include<iostream>
using namespace std;
int main (){

long long int x,m,y=0;int n;

while(y<20000)
{
    cin>>m >>n;
    if(m==0 && n==0){break;}
    if(n==100 ||n==0 ||m<=1){cout<<"Not found"<<endl;}
    else
{

    x=((m-1)*100)/(100-n);

    if(m==100 && n==1){cout<<"Not found"<<endl;}
    else if(x<m){cout<<"Not found"<<endl;}
    else if((m-1)*100%(100-n)==0 ){cout<<x-1<<endl;}
    else{cout<<x<<endl;}
    y++;}
}
return 0; }
