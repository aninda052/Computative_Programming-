#include<bits/stdc++.h>
#define mx 1010
using namespace std;
int low[mx],dis[mx],Time,parent[mx];
bool vis[mx],ap[mx];
vector<int>adj[mx];
bool track[mx][mx];

void ini(int x){

    for(int j=1;j<=x+5;j++){
        vis[j]=false;
        dis[j]=0;
        low[j]=0;
        parent[j]=j;
        adj[j].clear();
        for(int k=1;k<=x+5;k++){
            track[j][k]=false;
        }
    }
    Time=0;
}

void DFS(int root){

    vis[root]=true;
    low[root]=dis[root]=++Time;
    int child=0;
    for(int i=0;i<adj[root].size();i++){
        int v=adj[root][i];
        if(!vis[v]){
            parent[v]=root;
            child++;
            DFS(v);
            low[root]=min(low[root],low[v]);
            if(low[v]>dis[root]){
                track[root][v]=track[v][root]=true;
            }
            else if (!track[root][v])track[v][root]=true;
        }
        else if(v!=parent[root]){
            low[root]=min(dis[v],low[root]);
            if(!track[root][v])track[v][root]=true;
        }

    }
}



main(){
    //freopen("in.txt","r",stdin);
    int n,m,a,b,Case=1;
    while(scanf("%d %d",&n,&m) && n && m){
        ini(n);
        while(m--){
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        printf("%d\n\n",Case);
        DFS(1);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            if(track[i][j])cout<<i<<" "<<j<<endl;
        printf("#\n");
        Case++;
    }

return 0;}
