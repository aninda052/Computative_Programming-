#include<bits/stdc++.h>
#define mx 20005
using namespace std;

int table[1005][1005],tmp,ans;
string arr1;
int sol(int i,int j){

    if(i==j)return 0;
    if(table[i][j]!=-1)return table[i][j];
    if(i+1==j){
        if(arr1[i]==arr1[j])return table[i][j]=0;
        else return table[i][j]=1;
    }
    if(arr1[i]==arr1[j])ans=sol(i+1,j-1);
    else{
        ans=min(sol(i,j-1),min(sol(i+1,j),sol(i+1,j-1)))+1;

    }
    return table[i][j]=ans;
}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        cin>>arr1;
        tmp=arr1.length()-1;
        memset(table,-1,sizeof table);
        printf("Case %d: %d\n",i,sol(0,tmp));

    }
    return 0;
}


