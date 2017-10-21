#include<bits/stdc++.h>
#define mx 10008
using namespace std;
vector<int>adj[mx];
int low[mx],dis[mx],parent[mx],Time,vis[mx],cnt=0,groups,mark;
bool ap[mx];

void ini(int x){

    for(int i=0;i<x+5;i++){
        vis[i]=0;
        dis[i]=0;
        low[i]=0;
        ap[i]=false;
        parent[i]=i;
        adj[i].clear();

    }
    Time=0;
}

void Sol(int root){

    vis[root]=1;
    dis[root]=low[root]=++Time;
    int child=0;
    for(int i=0;i<adj[root].size();i++){
        int v=adj[root][i];
        if(!vis[v]){
            parent[v]=root;
            child++;
            Sol(v);
            low[root]=min(low[v],low[root]);
            if((parent[root]==root && child>1)||(parent[root]!=root && low[v]>=dis[root])){
                ap[root]=true;
            }
        }
        else if(parent[root]!=v){
            low[root]=min(dis[v],low[root]);

        }

    }

}

void dfs(int root){

    vis[root]=1;
    cnt++;
    for(int i=0;i<adj[root].size();i++){
        int v=adj[root][i];
        if(!vis[v] && !ap[v]){
            dfs(v);
        }
        if(ap[v] && vis[v]!=mark+1){
            groups++;
            vis[v]=mark+1;
        }
    }

}

main(){

    int t,n,m,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&n,&m);
        ini(n);
        while(m--){
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        Sol(0);
        int res=0;
        unsigned long long int way=1;
        fill(vis,vis+mx,0);
        for(int j=0;j<n;j++){
               // cout<<j<<" "<<vis[j]<<" "<<ap[j]<<endl;
            if(!vis[j] && !ap[j]){
                cnt=groups=0;
               // cout<<j<<endl;
                dfs(j);
                mark++;
                if(groups<2){
                    res++;
                    way*=cnt;
                }
            }
        }
        if(res==1){
            res++;
            way=(n*(n-1))>>1;
        }
        printf("Case %d: %d %llu\n",i,res,way);
    }


return 0;}
