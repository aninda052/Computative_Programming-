#include<bits/stdc++.h>
using namespace std;
int main (){
int a,s;
while(cin>>a>>s&&a!=0&&s!=0)
{
    int k=sqrt(s),i=sqrt(a);
    int j=k-i;
    if(i*i==a)j=j+1;

    cout<<j<<endl;
}
return 0;}
