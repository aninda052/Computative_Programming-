#include<iostream>
using namespace std;
int main (){
int a,s,d,f,x;
while(1){
cin>>a;
if(a==0){break;}
d=1;f=1;x=0;
if(a==1){cout<<"1"<<endl;}
else{for(s=1;s<a;s++)
{
    x=d;
    d=f;
    f=d+x;

}
cout<<f<<endl;}
}
return 0;}
