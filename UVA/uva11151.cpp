#include<bits/stdc++.h>
#define mx 20005
using namespace std;

int dp[1005][1005];
string arr;
int  sol(int x ,int y){

    if(x>y)return 0;
    if(x==y)return 1;
    if(dp[x][y]!=-1)return dp[x][y];
    if(arr[x]==arr[y])dp[x][y]=sol(x+1,y-1)+2;
    else{
        dp[x][y]=max(sol(x+1,y),sol(x,y-1));
    }
    return dp[x][y];

}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    char c;
    scanf("%d",&t);
    cin.ignore();
    while(t--){

        getline(cin,arr);
        if(arr=="")cout<<"0"<<endl;
        else{
            int tmp=arr.length();
            memset(dp,-1,sizeof dp);
            printf("%d\n",sol(0,tmp-1));
        }
    }
    return 0;
    }


