#include<iostream>
using namespace std;
int main (){
int n,z,y ,m,sum,x;
cin>>z;
for(y=0;y<z;y++)
{
    cin>>n>>m;
    sum=0;
    while(n>=m)
        {
            x=n/m;
            n=(n/m)+(n%m);
            sum=sum+x;
        }
if(n==1){cout<<sum<<endl;}
else{cout<<"cannot do this"<<endl;}
}

return 0;}
