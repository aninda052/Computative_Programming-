#include<bits/stdc++.h>
int flag[15000005];
using namespace std;
int main (){
long long int a,x,i,j;
while(cin>>a&&a!=0)
{
    int k=0;
   for(i=2;i<=a+1;i++)
{

    if(flag[i]==0){
        for(j=i*2;j<=a+1;j+=i){
            flag[j]=1;}
      if(a%i==0){ x=i;k++;}

    }
}

cout<<a<<" : "<<k<<endl;
}
return 0;}


