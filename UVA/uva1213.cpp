#include<bits/stdc++.h>
using namespace std;
int dp[200][1130][16];
int arr[1121];
int n,k;
vector<int>prime;


void sieve(){

    prime.push_back(2);
    arr[1]=true;
    for(int i=4;i<=1120;i+=2)arr[i]=true;
    for(int i=3;i<=1120;i+=2){
        if(!arr[i]){
            prime.push_back(i);
            for(int j=i*i;j<=1120;j+=i)arr[j]=true;
        }
    }
}


int func(int lvl,int cost,int num){

    if(cost==n && num==k)return 1;
    if(cost>=n || prime[lvl]>=n || num==k || lvl==187)return 0;
    if(dp[lvl][cost][num]!=-1)return dp[lvl][cost][num];
    return dp[lvl][cost][num]=func(lvl+1,cost+prime[lvl],num+1)+func(lvl+1,cost,num);

}

main(){
   //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    sieve();
    while(scanf("%d %d",&n,&k)){
        if(n==0 && k==0)break;
        if(n==1 || (k==1 && arr[n]) )printf("0\n");
        else if(k==1 && !arr[n])printf("1\n");

        else {
            memset(dp,-1,sizeof dp);
            cout<<func(0,0,0)<<endl;
        }

    }

return 0;}

