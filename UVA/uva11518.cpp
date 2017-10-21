#include<bits/stdc++.h>
#define mx 10008
using namespace std;
bool vis[mx];
vector<int> v[mx];
queue<int>q;
int cnt;
int bfs(int strt){
    q.push(strt);
    vis[strt]=true;
    while(!q.empty()){
        int nood=q.front();
        q.pop();
        for(int i=0;i<v[nood].size();i++){
            int child=v[nood][i];
            if(vis[child]==false){
                vis[child]=true;
                q.push(child);
                cnt++;
            }
        }
    }
}
main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m,l,x,y,z,T;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d",&n,&m,&l);
        fill(vis,vis+n+2,false);
        cnt=0;
        while(m--){
            scanf("%d %d",&x,&y);
            v[x].push_back(y);
        }
        while(l--){
            scanf("%d",&z);
            if(vis[z]==false){cnt++;bfs(z);}
        }
        printf("%d\n",cnt);
        memset(v,NULL,sizeof(v));


    }
}
