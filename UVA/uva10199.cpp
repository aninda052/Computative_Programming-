#include<bits/stdc++.h>
#define mx 10005
using namespace std;
vector<int>adj[mx];
vector<string>reslt;
int dis[mx],low[mx],parent[mx],Time;
bool vis[mx],ap[mx];
map<string,int>mp;
map<int,string>mprev;

void ini(int X){

    for(int i=0;i<=X;i++){
        vis[i]=false;
        ap[i]=false;
        parent[i]=i;
        dis[i]=0;
        low[i]=0;
        adj[i].clear();

    }
    Time=0;

}

int DFS(int root){

    vis[root]=true;
    dis[root]=low[root]=++Time;
    int child=0;
    for(int i=0;i<adj[root].size();i++){
        int v=adj[root][i];
        if(!vis[v]){
            child++;
            parent[v]=root;
            DFS(v);
            low[root]=min(low[root],low[v]);
            if((parent[root]==root && child>1 && !ap[root]) || (parent[root]!=root && dis[root]<=low[v] && !ap[root])){
               ap[root]=true;
               reslt.push_back(mprev[root]);
            }
        }
        else if(v!=parent[root]){
            low[root]=min(dis[v],low[root]);
        }
    }
}

main(){
     //freopen("in.txt","r",stdin);
     //freopen("out.txt","w",stdout);
    int N,R,Case=1;
    string city,a,b;
    while(scanf("%d",&N) && N){
        if(Case!=1)printf("\n");
        ini(N);
        for(int i=0;i<N;i++){
            cin>>city;
            mp[city]=i;
            mprev[i]=city;
        }
        scanf("%d",&R);
        while(R--){
            cin>>a>>b;
            int x=mp[a];
            int y=mp[b];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i=0;i<N;i++)if(!vis[i])DFS(i);
        printf("City map #%d: %d camera(s) found\n",Case,reslt.size());
        sort(reslt.begin(),reslt.end());
        for(int k=0;k<reslt.size();k++)cout<<reslt[k]<<endl;

        mp.clear();
        mprev.clear();
        reslt.clear();
        Case++;
    }
return 0;
}
