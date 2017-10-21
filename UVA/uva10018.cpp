#include<iostream>
#include<sstream>
using namespace std;
int main (){
int a;
string fast;
cin>>a;
stringstream convert;
convert<<a;
fast=convert.str();
int len;
len=fast.length();
int i,z,fast_rep[len];
z=len;
for(i=0;i<z;i++)
{
    fast_rep[len-1]=fast[i]-48;

    cout<<fast_rep[len-1]<<"_"<<fast[i]<<endl;
     len--;
}
cout<<fast_rep[4]<<"_"<<fast<<endl;
//int s;
//stringstream ss(fast_rep);
//ss>>s;

return 0;}
