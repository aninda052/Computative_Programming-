#include<bits/stdc++.h>
#define mx 100005
using namespace std;
int dp[1005][35],cost[1005],wight[1005];
int profit1,profit2,cap,n,x;

int func(int i,int w){

    if(dp[i][w]!=-1) return dp[i][w];
    if(i==n)return 0;
    if(w+wight[i]<=cap){
        dp[i][w]=func(i+1,w+wight[i])+cost[i];
    }
    else {dp[i][w]=0;}
    x=func(i+1,w);
    dp[i][w]=max(dp[i][w],x);
    return dp[i][w];

}

int mmset(int x){
    for(int i=0;i<=x;i++)
        for(int j=0;j<=32;j++)
            dp[i][j]=-1;
}

int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,p,w,RES,g;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d %d",&p,&w);
            //arr[i]=make_pair(p,w);
            cost[i]=p;
            wight[i]=w;

        }
        scanf("%d",&g);
        RES=0;

        while(g--){
            mmset(n+1);
            scanf("%d",&cap);
            RES+=func(0,0);
        }
        printf("%d\n",RES);

    }

    return 0;
}
