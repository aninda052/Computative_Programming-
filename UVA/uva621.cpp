#include<iostream>

using namespace std;
int main (){
int a,s;
string x;
cin>>a;
cin.ignore();
while(a--)
{
    getline(cin,x);
    s=x.length();
    if((x[s-1]=='1' ||x[s-1]=='4' ||(x[s-1]=='8' &&x[s-2]=='7'))&&s<=2){cout<<"+"<<endl;}
    else if((x[s-1]=='5' &&x[s-2]=='3')){cout<<"-"<<endl;}
    else if((x[s-1]=='4' &&x[0]=='9')){cout<<"*"<<endl;}
    else {cout<<"?"<<endl;}
}
return 0;}
