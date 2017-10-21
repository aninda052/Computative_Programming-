#include<bits/stdc++.h>
using namespace std;
int arr [1000000];
void sieve(){
int z;
for(int i=4;i<=1000000;i+=2)
{
    arr[i]=1;
}

for(int i=3;i<=sqrt(1000000);i+=2)
{
    if(arr[i]!=1){
    for(int j=i*i;j<=1000000;j+=(i<<1))
    arr[j]=1;}
}

}
int main (){
int i,j,x,cnt=0;
sieve();
while(true){
cin>>x;
if(x==0)break;
//sieve(x);
for(i=3;i<=1000000;i+=2)
{
   if(arr[i]==0){if(arr[x-i]==0){cout<<x<<" = "<<i<<" + "<<x-i<<endl;break;}


   }
}
}
return 0;}
