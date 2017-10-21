#include<bits/stdc++.h>
using namespace std;
long long int dp[10][30100],n;
int arr[]={1,5,10,25,50};

long long int func(int idx,int amount){

    if(amount==0)return 1;
    if(idx>=5){
        if(amount==0)return 1;
        return 0;
    }
    if(dp[idx][amount]!=-1 )return dp[idx][amount];
    long long int res1=0,res2=0;
    if(amount-arr[idx]>=0){
        res1=func(idx,amount-arr[idx]);
    }
    res2=func(idx+1,amount);
    return dp[idx][amount]=res1+res2;

}




main(){

    memset(dp,-1,sizeof dp);
    while(scanf("%d",&n)!=EOF){
        if(n<=4)printf("There is only 1 way to produce %d cents change.\n",n);
        else printf("There are %lld ways to produce %d cents change.\n",func(0,n),n);
    }
return 0;}

