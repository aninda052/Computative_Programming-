#include<bits/stdc++.h>
using namespace std;
int dp[110][10010];
int c[110],weight[110];
int n,m,D,tmp,M;


int func(int lvl,int cost){

    if(cost>m && cost<1801) return -1000;
    if(lvl==n){
        if(cost>m && cost<2001) return -1000;
        return 0;
    }
    if(dp[lvl][cost]!=-1)return dp[lvl][cost];
    int x=cost+c[lvl];
    if(x<=M){
        dp[lvl][cost]=func(lvl+1,x)+weight[lvl];

    }
    else dp[lvl][cost]=-1000;
    tmp=func(lvl+1,cost);
    dp[lvl][cost]=max(tmp,dp[lvl][cost]);
    return dp[lvl][cost];

}

int mmset(int x,int y){
    for(int i=0;i<=x;i++)
        for(int j=0;j<=y;j++)
            dp[i][j]=-1;
}

main(){
   //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%d %d",&m,&n)!=EOF){
        for(int i=0;i<n;i++){
                //cout<<"-> "<<i<<endl;
            scanf("%d %d",&c[i],&weight[i]);
        }
        mmset(n+5,m+2001);
        M=m+200;
        printf("%d\n",func(0,0));

    }

return 0;}

