#include<bits/stdc++.h>
using namespace std;
long long int dp[205][205][15];
int arr[205];
int N,M,D;

long long int func(int lvl,int cost,int idx){


    if(idx==M && cost==0)return 1;
    if((idx==M && cost) || lvl==N)return 0;
    if(dp[lvl][cost][idx]!=-1)return dp[lvl][cost][idx];
    dp[lvl][cost][idx]=func(lvl+1,(cost+arr[lvl])%D,idx+1)+func(lvl+1,cost%D,idx);
    return dp[lvl][cost][idx];

}

main(){
   freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int Q,test=1;
    while(scanf("%d %d",&N,&Q)){
        if(N==0 && Q==0)break;
        for(int i=0;i<N;i++){
                //cout<<"-> "<<i<<endl;
            scanf("%d",&arr[i]);
        }
        //func(0,0,0);
        printf("SET %d:\n",test);
        for(int i=1;i<=Q;i++){
            scanf("%d %d",&D,&M);
            memset(dp,-1,sizeof dp);
            printf("QUERY %d: %lld\n",i,func(0,0,0));
        }
        test++;
    }

return 0;}

