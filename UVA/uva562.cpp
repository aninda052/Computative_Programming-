#include<bits/stdc++.h>
using namespace std;
int dp[101][50010],arr[101];
int total,res,m;

int func(int i,int cost){

    if(dp[i][cost]!=-1)return dp[i][cost];
    if(i==m) return (abs(cost-(total-cost) ));
    dp[i][cost]=min(func(i+1,cost+arr[i]),func(i+1,cost));
    return dp[i][cost];

}

void mms(int x){
    for(int i=0;i<=x;i++)
        for(int j=0;j<=x*500;j++)dp[i][j]=-1;
}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        scanf("%d",&m);
        total=0;
        for(int i=0;i<m;i++){
            scanf("%d",&arr[i]);
            total+=arr[i];
        }
        mms(m);
        cout<<func(0,0)<<endl;

    }
return 0;}
