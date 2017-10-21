#include<iostream>
using namespace std;
int main (){

int a,i,x,y,len,s;
string d;
cin>>a;
cin.ignore();
for(s=0;s<a;s++)
{
    getline(cin,d);
    len=d.length();
    x=0;y=0;
    for(i=0;i<len;i++)
    {
        if(d[i]=='M'){x++;}
        else if(d[i]=='F'){y++;}
    }
    if(x!=y ||x==1 ||y==1) {cout<<"NO LOOP"<<endl;}
    else{cout<<"LOOP"<<endl;}


}
return 0;
}
