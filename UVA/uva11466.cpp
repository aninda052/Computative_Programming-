#include<bits/stdc++.h>
int flag[15000005];
using namespace std;
int main (){
long long int a,x,i,j;
while(cin>>a&&a!=0)
{
    if(a==1)cout<<"-1"<<endl;
   else{int k=0;
   for(i=2;i<=sqrt(a)+1;i++)
{

    if(flag[i]==0){
        for(j=i*2;j<=sqrt(a)+1;j+=i){
            flag[j]=1;}
      if(a%i==0){ x=i;k++;}
    }
}

  if(k-1==0||k==0)cout<<"-1"<<endl;
 else cout<<x<<endl;}
}
return 0;}

