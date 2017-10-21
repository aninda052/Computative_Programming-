#include<bits/stdc++.h>
using namespace std ;
int dp[120][10110],arr[110],test,tk,N;

int func(int idx,int amount){

    if(amount<=0)return (0-amount);
    if(idx>=N){
        if(amount<=0)return (0-amount);
        return 1000000;
    }
    if(dp[idx][amount]!=-1)return dp[idx][amount];
    if(amount-arr[idx]>=-1000000){
        dp[idx][amount]=func(idx+1,amount-arr[idx]);
    }
    return dp[idx][amount]=min(dp[idx][amount],func(idx+1,amount) );
}

int func1(int idx,int amount){

    if(amount<=0){
        if(amount==0)return 0;
        return 100000;
    }
    if(idx>=N){
        if(amount==0)return 0;
        return 100000;
    }
    if(dp[idx][amount]!=-1)return dp[idx][amount];
    if(amount-arr[idx]>=-10000){
        dp[idx][amount]=func1(idx+1,amount-arr[idx])+1;
    }
    return dp[idx][amount]=min(dp[idx][amount],func1(idx+1,amount) );
}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    memset(dp,-1,sizeof dp);
    scanf("%d",&test);
    while(test--){
        scanf("%d",&tk);
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
        }
        memset(dp,-1,sizeof dp);
        int tmp=func(0,tk);
        memset(dp,-1,sizeof dp);
        printf("%d %d\n",tmp+tk,func1(0,tk+tmp));
    }
return 0;}
