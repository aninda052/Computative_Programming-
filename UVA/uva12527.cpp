#include <sstream>
#include <iostream>
#include <string>
using namespace std;

int main (){
int a,s,d,e,x=0,m,n,p=0,q=0;
string y;
cin>>n>>m;
for(a=n;a<=m;a++)
{

    ostringstream convert;
    convert<<a;
    y=convert.str();
    s=y.length();
    for(d=0;d<s;d++)
    {
        if(y[d]==y[d+1]){q++;break;}
        e=y[d]-48;
        cout<<y<<endl;
        cout<<e<<endl;


    }


}
cout<<(m-n)-q<<endl;
return 0;}
