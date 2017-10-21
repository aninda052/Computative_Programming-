#include<iostream>
using namespace std;
int main (){
int t,a,q,s,d,f,g,h;
int x[5];
while(cin>>t>>s>>d>>f>>g>>h)
{
    x[0]=s;x[1]=d;x[2]=f;x[3]=g;x[4]=h;q=0;
for(a=0;a<5;a++)
{

    if(x[a]==t){q++;}
}

cout<<q<<endl;}
return 0; }
