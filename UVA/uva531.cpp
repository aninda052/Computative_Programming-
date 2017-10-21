#include<bits/stdc++.h>
using namespace std;
int dp[105][105],ans,I,J,flg;
string arr1[105],arr2[105],STR;
bool vis[105][105];

int sol(int i,int j){

    if(i==I || j==J)return 0;
    if(vis[i][j])return dp[i][j];
    ans=0;
    if(arr1[i]==arr2[j])ans=1+sol(i+1,j+1);
    else{
        ans=max(sol(i,j+1),sol(i+1,j));

    }
    vis[i][j]=true;
    return dp[i][j]=ans;

}
 void printsol(int i,int j){
//cout<<i<<" "<<j<<endl;
    if(i==I || j==J){
        cout<<STR<<endl;
        return ;
    }
    if(arr1[i]==arr2[j]){
    if(flg==1)STR+=' ';
    STR+=arr1[i];
    flg=1;
    printsol(i+1,j+1);
    }
    else{
        if(dp[i+1][j]>dp[i][j+1])printsol(i+1,j);
        else printsol(i,j+1);
    }


 }

main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
    string  str;
    while(cin>>str){
        arr1[0]=str;
        I=1;
        while(cin>>str){
            if(str=="#")break;
            arr1[I]=str;
            I++;

        }
        J=0;
        //cout<<"sdfsdf";
        while(cin>>str ){
            if(str=="#")break;
            arr2[J]=str;
            J++;
        }
        //cout<<"-----------";
        //cout<<sol(0,0)<<endl;
        sol(0,0);
        flg=0;
        STR="";
        printsol(0,0);
       // printf("\n",t,sol(0,0));
        memset(vis,false,sizeof vis);
        memset(dp,-1,sizeof dp);


    }


return 0;}

