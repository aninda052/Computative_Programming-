#include<bits/stdc++.h>
#define mx 10008
using namespace std;
int dis[mx],low[mx],Time,place;
bool vis[mx],visO[mx], Flg;
vector<int>adj[mx];
map<pair<int,int>, bool>Bridge;

void ini(int x){

    for(int i=0;i<x+2;i++){
        dis[i]=0;
        low[i]=0;
        vis[i]=false;
        visO[i]=false;
        adj[i].clear();
        //adj[i].clear();
    }
    Time=0;

}



void findingBridge (int nood,int parent){

    vis[nood]=true;
    dis[nood]=low[nood]=++Time;
    int child=0;
    for(int i=0;i<adj[nood].size();i++){
        int v=adj[nood][i];
        if(parent==v)continue;
        if(!vis[v]){
            child++;
            findingBridge(v,nood);
            low[nood]=min(low[v],low[nood]);
            if(low[v]>dis[nood]){
                Bridge[make_pair(v,nood) ]=true;
                Bridge[make_pair(nood,v) ]=true;
                //Bridge[nood][v]=true;
            }

        }
        else {
            low[nood]=min(low[nood],dis[v]);
        }
    }
}

void findingPlace(int nood){

    vis[nood]=true;
    queue<int>q;
    q.push(nood);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        place++;
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];
            if(Bridge.count(make_pair(u,v)))continue;
            if(!vis[v] && !visO[v]){q.push(v);}
            if(vis[u] && vis[v]){Flg=true;}
            //cout<<u<<" "<<v<<" "<<vis[u]<<" "<<visO[u]<<endl;
            if(vis[u])visO[v]=true;
            if(visO[u])vis[v]=true;
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
        //memset(Bridge,NULL,sizeof Bridge);
        Bridge.clear();
        for(int j=0;j<n;j++)if(!vis[j])findingBridge(j,-1);
        int res=0;
        fill(vis,vis+mx,0);
        for(int j=0;j<n;j++){
            if(!vis[j] && !visO[j]){
                place=0;
                Flg=false;
                findingPlace(j);
                if(Flg){
                    res+=place;
                }
            }
        }

        printf("Case %d: %d\n",i,res);
    }

return 0;}
