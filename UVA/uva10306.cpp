#include<bits/stdc++.h>
using namespace std;
int dp[350][350][350],n,m,s;
pair<int,int>arr[45];

int func(int lvl ,int idx,int amount ,int X,int Y){

    if(amount==0)return 0;
    if(idx>=m){
        if(amount==0)return 0;
        return 1000000;
    }
    int x=arr[idx].first+X;
    int y=arr[idx].second+Y;
    if(dp[lvl][X][Y]!=-1 )return dp[lvl][X][Y];
    if(s*s-(x*x+y*y)>=0){
        dp[lvl][X][Y]=func(lvl,idx,(amount-(x*x+y*y))+(X*X+Y*Y),x,y)+1;
    }
    else dp[lvl][X][Y]=1000000;
    return dp[lvl][X][Y]=min(dp[lvl][X][Y],func(lvl+1,idx+1,amount,X,Y));

}


main(){
    int con,info;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&m,&s);
        for(int i=0;i<m;i++){
            scanf("%d %d",&con,&info);
            arr[i]=make_pair(con,info);
        }
        memset(dp,-1,sizeof dp);
        int res=func(0,0,s*s,0,0);
        if(res==1000000)printf("not possible\n");
        else printf("%d\n",res);
    }
return 0;}
