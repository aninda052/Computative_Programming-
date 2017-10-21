#include<bits/stdc++.h>
#define mx 10008
using namespace std;
int dis[mx],low[mx],Time,leaf,rootchild,tmp[mx],vis[mx],groups;
bool Flg;
vector<int>adj[mx];
vector<pair<int,int> >Bridgevec;
map<pair<int,int>, bool>Bridge;


void ini(int x){

    for(int i=0;i<x+2;i++){
        dis[i]=0;
        low[i]=0;
        vis[i]=0;
        adj[i].clear();
        tmp[i]=0;
    }
    Time=0;
    leaf=0;
    Bridge.clear();
    Bridgevec.clear();

}



void findingBridge (int nood,int parent){

    vis[nood]=true;
    dis[nood]=low[nood]=++Time;
    int child=0;
    Flg=false;
    for(int i=0;i<adj[nood].size();i++){
        int v=adj[nood][i];
        if(parent==v)continue;
        if(!vis[v]){
            child++;
            findingBridge(v,nood);
            low[nood]=min(low[v],low[nood]);
            if(low[v]>dis[nood]){
                Bridge[make_pair(v,nood)]=true;
                Bridge[make_pair(nood,v)]=true;
                Bridgevec.push_back(make_pair(nood,v));
                //tmp[nood]++;
                //tmp[v]++;
                //cout<<nood<<"-"<<v<<endl;
            }
            //if(low[v]>=dis[nood] && parent!=-1)tmp[nood]=10000;


        }
        else {
            low[nood]=min(low[nood],dis[v]);

        }
        Flg=true;
    }
    //if(!Flg)leaf++;
   // if(parent==-1 && child>1)tmp[nood]=10000;;
}

void groupfind(int u){

    vis[u]=groups;
    for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if(Bridge.count(make_pair(u,v)))continue;
        if(!vis[v])groupfind(v);
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

        for(int j=0;j<n;j++){
            if(!vis[j])findingBridge(j,-1);
        }
        fill(vis,vis+n+2,0);
        groups=1;
        for(int j=0;j<n;j++){
            if(!vis[j]){
                groupfind(j);
                groups++;
            }
        }
        int res=0;
        for(int i=0;i<Bridgevec.size();i++){
            int a=Bridgevec[i].first;
            int b=Bridgevec[i].second;
            //cout<<a<<" "<<vis[a]<<" "<<b<<" "<<vis[b]<<endl;
            tmp[vis[a]]++;
            tmp[vis[b]]++;

        }
        for(int i=0;i<=n;i++){
            if(tmp[i]==1)res++;
            //cout<<i<<" "<<tmp[i]<<endl;
        }
        if(res%2)res++;
        printf("Case %d: %d\n",i,res/2);
    }

return 0;}

