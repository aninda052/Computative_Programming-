#include<bits/stdc++.h>
using namespace std;
int main (){
int a,s;
cin>>a;
while(a--)
{
    cin>>s;
    double x=s*.6;
    double green =s*x;
    double y=s*.2;
    double red =M_PI*y*y;
    printf("%.2lf %.2lf\n",red,green-red);
}
return 0;}
