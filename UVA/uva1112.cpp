#include<bits/stdc++.h>
#define mx 105
using namespace std;
vector<pair<int,int> > v[mx];
multiset<pair<int,int> > ms;
pair<int,int>p;
bool vis[mx];
int dis[mx];
int dijkstra(int N,int range,int destination){
    fill(dis,dis+range+2,100000000);
    fill(vis,vis+range+2,false);
    dis[N]=0;
    ms.insert({0,N});
    while(!ms.empty()){
        p=*ms.begin();
        ms.erase(ms.begin());
        int nood=p.second;
        if(vis[nood])continue;
        vis[nood]=true;
        for(int i=0;i<v[nood].size();i++){
            int cost=v[nood][i].second;
            int child=v[nood][i].first;
            if(dis[child]>dis[nood]+cost){
                dis[child]=dis[nood]+cost;
                ms.insert({dis[child],child});
            }
        }
    }
    return dis[destination];
}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test,N,E,T,M,a,b,time;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d %d %d",&N,&E,&T,&M);
        while(M--){
            scanf("%d %d %d",&a,&b,&time);
            v[a].push_back(make_pair(b,time));
        }
        int cnt=0;
        for(int i=1;i<=N;i++){
            if(i!=E){
                int tmp=dijkstra(i,N,E);
                if(tmp<=T)cnt++;
            }
        }
        printf("%d\n",cnt+1);
        if(test!=0)printf("\n");
        memset(v,NULL,sizeof(v));
    }

return 0;}


