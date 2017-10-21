#include<bits/stdc++.h>
#define mx 20
using namespace std;
vector<pair<int,int> > V1[mx];
vector<pair<int,int> > V2[mx];
multiset< pair<int ,int> > S;
bool vis[mx];
int dis[2][mx];
bool flg[20];
vector<int>res;

int dijkstra(int s,int t,int del){
   int flg1=0;
    fill(flg,flg+15,false);
    fill(vis,vis+mx,false);
    vector<pair<int,int> >*v;
    int T;
    if(del<0){
        T=0;
        v=V1;
    }
    else{
        T=1;
        v=V2;
    }
    dis[T][s]=0;
    S.insert({0,s});
    int flg2=0;
    while(!S.empty()){
        pair< int, int> p=*S.begin();
        S.erase(S.begin());
        int nood=p.second;
        if(vis[nood])continue;
        vis[nood]=true;
        for(int i=0;i<v[nood].size();i++){
            int child=v[nood][i].first;
            int weight=v[nood][i].second;

           if(del>0){
                if(weight+dis[0][child]+dis[1][nood]==del && flg[child]==false && flg1==0){
                    res.push_back(child);
                    flg[child] =true;
                    if(child==t)flg1=1;
                }
            }
            if(dis[T][nood]+weight<dis[T][child]){
                dis[T][child]=dis[T][nood]+weight;
                S.insert({dis[T][child],child});
            }




        }
    }
    return dis[0][t];

}
main (){
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int N,n,m,s,t,u,v1,w,j=1;
    while(scanf("%d",&N)){
        if(N==0)break;
        u=1;
        while(N--){
            scanf("%d",&m);
            while(m--){
                scanf("%d %d",&v1,&w);
                V1[u].push_back(make_pair(v1,w));
                V2[v1].push_back(make_pair(u,w));
            }
            u++;
        }
        for(int i=0;i<=1;i++)
            for(int j=1;j<=15;j++)
                dis[i][j]=1000000000;

        scanf("%d %d",&s,&t);
        int delay=dijkstra(s,t,-1);
        dijkstra(t,s,delay);

        printf("Case %d: Path =",j,delay);
        for(int i=res.size()-1;i>=0;i--){
            cout<<" "<<res[i];
        }
        printf(" %d; %d second delay\n",t,delay);
        j++;

        memset(V1,NULL,sizeof(V1));
        memset(V2,NULL,sizeof(V2));

        res.clear();
    }

return 0;}
