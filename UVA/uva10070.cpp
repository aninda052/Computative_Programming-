#include<iostream>
using namespace std;
int main (){

int a,m=0,i,j,k;
while(cin>>a)
{
    i=0;k=0;j=0;
    if(m!=0){cout<<endl;}
    if((a%4==0 && a%100!=0) || a%400==0){cout<<"This is leap year."<<endl;i=1;}
    if(a%15==0){cout<<"This is huluculu festival year."<<endl;k=1;}
    if(a%55==0){cout<<"This is bulukulu festival year."<<endl;j=1;}
    if(i==0 && j==0 &&k==0) {cout<<"This is an ordinary year."<<endl;}
    m=1;
}
return 0;}
//(((a%4!=0 || a%100==0) && a%400!=0)&&(a%15!=0)&&(a%55!=0))
