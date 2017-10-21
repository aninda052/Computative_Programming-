#include<bits/stdc++.h>
using namespace std;
int main (){
long long int a;int d=1;
double y;
int z;
while(cin>>a &&a!=0)
{
    y=(3+sqrt(9+8*a))/2;
    z=y;
    if(abs(y-z)!=0)z=z+1;
    printf("Case %d: %d\n",d,z);
    d++;
}
return 0;}
