#include<iostream>
using namespace std;
int main (){
int a,i;
string s;
cin>>a;
s[0]=48;s[1]=49;
for(i=0;i<a;i++)
{
    s[2]=s[0]+s[1];
    s[1]=s[0];
    s[0]=s[2];
}
cout<<s[2];
return 0;}
