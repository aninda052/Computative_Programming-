#include<iostream>
using namespace std;
int main (){
int a,s,d,i,j;
string z;
cin>>a;
for(s=0;s<a;s++)
{
    cin>>z;
    i=z.length();
    if(i==5){cout<<"3"<<endl;}
    else if((z[0]=='o' && z[1]=='n')||(z[0]=='o' && z[2]=='e')||(z[1]=='n' && z[2]=='e')) {cout<<"1"<<endl;}
    else{cout<<"2"<<endl;}
}
return 0;}
