#include<iostream>
#include<stdio.h>
using namespace std;
int main (){

long long int a,s,d,i,f;
cin>>f;
for(i=1;i<=f;i++)
{
    cin>>a>>s>>d;
    if((a+s<=d)||(a+d<=s)||(d+s<=a)){printf("Case %d: Invalid\n",i) ;}
    else{ if (a==s&&s==d) {printf("Case %d: Equilateral\n",i); }
        else    if ((a==s&&s!=d)||(a==d&&s!=d)||(d==s&&s!=a)){printf("Case %d: Isosceles\n",i) ;}
        else{printf("Case %d: Scalene\n",i) ;}}


}
return 0;}
