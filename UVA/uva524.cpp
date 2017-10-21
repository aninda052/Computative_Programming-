#include<bits/stdc++.h>
using namespace std;
int prime[]={2,3,5,7,11,13,17,19,23,29,31};
bool vis[20];
int reslt[20];
vector<int>v;

bool isprime(int i){

    for(int j=0;j<11;j++)
        if(prime[j]==i)return true;
    return false;
}
void solution(int idx,int fnl){
    if(idx==fnl){
        if(isprime(reslt[idx-1]+1)){
            cout<<"1";
            for (int i=1;i<fnl;i++)
                printf(" %d", reslt[i]);
            printf("\n");
            return;
        }
        return;
    }
    for(int i=2;i<=fnl;i++){
        if(isprime(i+reslt[idx-1])){
            if(vis[i])continue;
            vis[i]=true;
            reslt[idx]=i;
            solution(idx+1,fnl);
            vis[i]=false;
        }
    }

}

main(){

    int T=1,N,flg=0;
    while(scanf("%d",&N)!=EOF){
        if(flg==1)cout<<endl;
        fill(vis,vis+N+1,false);
        reslt[0]=1;
        cout<<"Case "<<T<<":"<<endl;
        solution(1,N);
        T++;
        flg=1;


    }
}
