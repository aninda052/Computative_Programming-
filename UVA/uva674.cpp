#include<bits/stdc++.h>
using namespace std;
int dp[10][7500],n;
int arr[]={1,5,10,25,50};
int func(int idx,int amount){

    if(idx>=5){
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[idx][amount]!=-1)return dp[idx][amount];
    int ret1=0,ret2=0;
    if(amount-arr[idx]>=0)ret1=func(idx,amount-arr[idx]);
    ret2=func(idx+1,amount);
    return dp[idx][amount]=ret1 + ret2;
}
main(){
    memset(dp,-1,sizeof dp);
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",func(0,n));
    }
return 0;}
