#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
int n,r,x=1;
while(1)
{
    cin>>n>>r;
    if(n==0 && r==0){break;}
    if(n>(r*27)){printf("Case %d: impossible\n",x); }
    else if(n%r!=0) {printf("Case %d: %d\n",x,(n/r)); }
    else {printf("Case %d: %d\n",x,(n/r)-1); }
    x++;
}
return 0;}
