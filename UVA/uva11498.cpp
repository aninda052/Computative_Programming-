#include<iostream>
using namespace std;
int main (){
int k,n,m,x,y,i;
while(1){
cin>>k;
if(k==0){break;}
cin>>n>>m;
for(i=0;i<k;i++)
{

    cin>>x>>y;
    if(x==n || x==-n || y==m ||y==-m){cout<<"divisa"<<endl;}
    else if(x<n &&y>m){cout<<"NO"<<endl;}
    else if(x<n &&y<m){cout<<"SO"<<endl;}
    else if(x>n &&y<m){cout<<"SE"<<endl;}
    else{cout<<"NE"<<endl;}

}}
return 0;}
