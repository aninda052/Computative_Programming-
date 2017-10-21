#include<bits/stdc++.h>
using namespace std;
int main(){
long long int a,len;
cin>>a;
for(int i=1;i<=a;i++)
{
    string x;
    long long int fact=1;
    getline(cin,x);
    len=(x.length())+1;
    while(len--)
    {
        fact*=len;
        if(len==1)break;
    }
    printf("Data set %d: %ld\n",i,fact);

}
return 0;}
