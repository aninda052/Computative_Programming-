#include<bits/stdc++.h>
using namespace std ;
int main (){

string a;
while(1)
{
    int sum=0,s;
    getline(cin,a);
    int len=a.length();
    s=len;
    if(s==1&&a[0]==48)break;
    for(int i=0;i<s;i++)
    {
      sum+=(a[i]-48)*(pow(2,len)-1);
     // cout<<a[i]*(pow(2,len)-1)<<endl;
      len--;
    }

    cout<<sum<<endl;

}

return 0;}
