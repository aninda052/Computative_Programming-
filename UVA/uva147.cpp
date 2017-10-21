#include<bits/stdc++.h>
using namespace std;
long long int dp[17][30110];
double n;
int arr[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
long long int func(int idx,int amount){


    if(idx>=11){
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[idx][amount]!=-1)return dp[idx][amount];
    long long int ret1=0,ret2=0;
    if(amount-arr[idx]>=0)ret1=func(idx,amount-arr[idx]);
    ret2=func(idx+1,amount);
    return dp[idx][amount]=ret1 + ret2;
}
main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    memset(dp,-1,sizeof dp);
    while(cin>>n){
        if(n==0.00)break;
        int x=n*100;
        long double y=x/n;
        if(y<=99.999)x=x+1;
        printf("%6.2lf%17lld\n",n,func(0,x));

    }
return 0;}

