#include<bits/stdc++.h>
using namespace std;
int dp[3050][3050],N,tmpweight;
pair<int,int>p[3010];
int func(int idx,int weight){

    if(idx==N || weight<=0)return 0;
    if(dp[idx][weight]!=-1)return dp[idx][weight];
    if(weight>=p[idx].first){
        int tmpweight=min(p[idx].second,weight-p[idx].first);
        dp[idx][weight]=func(idx+1,tmpweight)+1;
    }
    else dp[idx][weight]=0;
    return dp[idx][weight]=max(func(idx+1,weight),dp[idx][weight]);
}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int x,y;
    while(scanf("%d",&N)&& N!=0){
        for(int i=0;i<N;i++){
            scanf("%d %d",&x,&y);
            p[i]=make_pair(x,y);
        }
        memset(dp,-1,sizeof dp);
        printf("%d\n",func(0,1000000));
    }
return 0;
}

