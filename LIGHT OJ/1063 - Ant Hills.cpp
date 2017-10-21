#include<bits/stdc++.h>
#define mx 20007
using namespace std;
int dis[mx],low[mx],parent[mx],Time,res;
bool vis[mx],ap[mx];
vector<int>adj[mx];
 void initial(int X){

    for(int i=1;i<=X;i++){
        parent[i]=i;
        vis[i]=ap[i]=false;
        low[i]=0;
        adj[i].clear();
    }
    Time=0;
    res=0;

 }

 void DFS(int root){

    vis[root]=true;
    low[root]=dis[root]=++Time;
    int child=0;
    for(int i=0;i<adj[root].size();i++){
        int v=adj[root][i];
        if(!vis[v]){
            child++;
           // if(root==1)cout<<child<<" "<<v<<endl;
        parent[v]=root;
            DFS(v);
            //parent[v]=root;
            low[root]=min(low[root],low[v]);
            //cout<<root<<" "<<dis[root]<<" "<<v<<" "<<low[v]<<endl;
            if((parent[root]==root && child>1 && !ap[root]) || (parent[root]!=root && dis[root]<=low[v] && !ap[root])){
                ap[root]=true;
                res++;
                //cout<<child<<endl;;
            }
           /* if(parent[root]!=root && dis[root]<=low[v] && !ap[root]){
                res++;
                ap[root]=true;
                cout<<"asd"<<endl;

            } */
        }
        else if(parent[root]!=v){
            low[root]=min(low[root],dis[v]);
        }

    }


 }

main(){

    int T,n,m,a,b;
    scanf("%d",&T);
    for(int j=1;j<=T;j++){
        scanf("%d %d",&n,&m);
        initial(n);
        while(m--){
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        DFS(1);
        printf("Case %d: %d\n",j,res);
    }


return 0;}

