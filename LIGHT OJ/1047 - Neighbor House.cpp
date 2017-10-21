#include<bits/stdc++.h>
#define mx 20005
using namespace std;

int color[25],n,arr[4][23],dp[4][23],reslt,tmp;




int  sol(int x ,int y){
//cout<<x<<" "<<y<<endl;
   if(x>=0 && y>=0 && x<3 && y<n){
        if(dp[x][y]!=-1)return dp[x][y];
        int tmp=100000000;
        if(x==0)tmp=min(sol(x+1,y+1),sol(x+2,y+1))+arr[x][y];
        //cout<<"1 "<<tmp<<endl;
        else if(x==1)tmp=min(sol(x-1,y+1),sol(x+1,y+1))+arr[x][y];
        //cout<<"2 "<<tmp<<endl;
        else tmp=min(sol(x-1,y+1),sol(x-2,y+1))+arr[x][y];
        //cout<<tmp<<endl;
        return dp[x][y]=tmp;
   }
   else return 0;


}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,R,B,G;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d %d %d",&arr[0][j],&arr[1][j],&arr[2][j]);
        }
        memset(dp,-1,sizeof dp);
        //reslt=100000000;
        //tmp=0;
        //cout<<min(sol(0,0),min(sol(1,0),sol(2,0)))<<endl;
        //cout<<sol(1,0)<<endl;
        //cout<<sol(2,0)<<endl;
        printf("Case %d: %d\n",i,min(sol(0,0),min(sol(1,0),sol(2,0))));
    }

return 0;}

