#include<bits/stdc++.h>
using namespace std;
int arr [4000];
void sieve(){
int z;
for(int i=4;i<=4000;i+=2)
{
    arr[i]=1;
}

for(int i=3;i<=sqrt(4000);i+=2)
{
    if(arr[i]!=1){
    for(int j=i*i;j<=4000;j+=(i<<1))
    arr[j]=1;}
}

}
int main (){
int i,j,x,cnt=0;
sieve();
while(true){
cin>>x;
if(x==0)break;
int cnt=0;
if(x==4)cout<<"1"<<endl;
else{for(i=3;i<=x/2;i++)
{
   if(arr[i]==0){if(arr[x-i]==0)cnt++;}

}}
cout<<cnt<<endl;}
return 0;}
