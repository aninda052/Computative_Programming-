#include<iostream>
#include<cmath>
using namespace std;
int main (){

double a,s,d;
while(cin>>a>>s>>d)
{
    if(a==0 && s==0 && d==0){break;}
    else if (((pow(a,2)+pow(s,2))==pow(d,2))||((pow(a,2)+pow(d,2))==pow(s,2))||((pow(d,2)+pow(s,2))==pow(a,2))){cout<<"right"<<endl;}
    else{cout<<"wrong"<<endl;}
}
return 0;}
