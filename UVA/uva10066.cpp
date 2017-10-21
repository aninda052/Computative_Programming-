#include<bits/stdc++.h>
using namespace std;
int dp[105][105],arr1[105],arr2[105],ans,tower1,tower2;
bool vis[105][105];

int sol(int i,int j){

    if(i==tower1 || j==tower2)return 0;
    if(vis[i][j])return dp[i][j];
    ans=0;
    if(arr1[i]==arr2[j])ans=1+sol(i+1,j+1);
    else{
        ans=max(sol(i,j+1),sol(i+1,j));

    }
    vis[i][j]=true;
    return dp[i][j]=ans;

}

main(){

    int t=1;
    while(scanf("%d %d",&tower1,&tower2)){
        if(tower1==0 && tower2==0)break;
        for(int i=0;i<tower1;i++)scanf("%d",&arr1[i]);
        for(int i=0;i<tower2;i++)scanf("%d",&arr2[i]);
        //cout<<sol(0,0)<<endl;
        //len1=arr1.length();
        //len2=arr2.length();
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",t,sol(0,0));
        memset(vis,false,sizeof vis);
        //memset(dp,,sizeof dp);
        t++;

    }


return 0;}
