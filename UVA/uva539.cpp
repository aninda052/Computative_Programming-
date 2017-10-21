#include<bits/stdc++.h>
using namespace std;
vector<int>vec[27];
bool vis[27][27];
int n,m,u,v,tmp;

int backtrack(int nood,int cnt){
   // cout<<nood<<" "<<cnt<<endl;
    tmp=max(tmp,cnt);
    for(int i=0;i<vec[nood].size();i++){
            if(vis[nood][vec[nood][i]]!=true && vis[vec[nood][i]][nood]!=true){
               vis[nood][vec[nood][i]]=true;
               vis[vec[nood][i]][nood]=true;
               backtrack(vec[nood][i],cnt+1);
               vis[nood][vec[nood][i]]=false;
               vis[vec[nood][i]][nood]=false;
            }

    }
   // return cnt;

}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(true){
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)break;
        while(m--){
            scanf("%d %d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        int res=0;
        for(int j=0;j<n;j++){
            tmp=0;
            backtrack(j,0);
            memset(vis,false,sizeof vis);
            res=max(res,tmp);
            //cout<<tmp<<endl;
        }
        //cout<<res<<endl;
        printf("%d\n",res);
        memset(vec,false,sizeof vec);
    }
return 0;}
