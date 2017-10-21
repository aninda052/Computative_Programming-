#include<bits/stdc++.h>
#define mx 100003
using namespace std;
int dp[101][10003],N;

int sol(int amount,int idx){

    int tmp=idx*idx;
    if(amount<0 || tmp>amount)return 100000;
    if(tmp==amount)return 1;
    if(dp[idx][amount]!=-1)return dp[idx][amount];
    if(tmp<=amount){
        dp[idx][amount]=sol((amount-tmp),idx )+1;
    }
    else dp[idx][amount]=100000;
    int x=sol(amount,idx+1);
    return dp[idx][amount]=min(dp[idx][amount],x);
}

int main() {
    memset(dp,-1,sizeof dp);
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&N);
        printf("%d\n",sol(N,1));
    }
    return 0;
}


