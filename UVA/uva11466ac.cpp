#include<bits/stdc++.h>
using namespace std;
int main (){
long long int a,k;
while(cin>>a&&a!=0)
{
    if(a<0)a*=-1;
    k=a;
    if(a==1)cout<<"-1"<<endl;
    else{
    int z=0,x=0,i=2;
    while(i<=sqrt(k)+1)
    {

        if(a%i==0){a/=i;if(z==0) {x++;z=1;}}
        else {i++;z=0;}
        //if(i<=sqrt(k)) {cout<<"SADFSDF"<<endl;break;}
        if(a==1){ break;}

    }
//cout<<a<<endl;
    if(a!=1&&k!=a)cout<<a<<endl;
    else  if(x==0||x==1)cout<<"-1"<<endl;
    else cout<<i<<endl;}
}
return 0;}

