#include <iostream>
#include<string>
#include<sstream>
using namespace std;

int main (){

int a,n,g;
string x;

while(1)
    {
    cin>>g;
    if(g==0){break;}
    while(g>9){
    stringstream convert;
    convert<<g;
    x=convert.str();
    a=x.length();
   g=0;
    for(n=0;n<a;n++)
    {
      g=g+(x[n]-48);

    }}
cout<<g<<endl;
    }
return 0;}

