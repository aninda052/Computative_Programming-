#include<bits/stdc++.h>
#define mx 10005
using namespace std;
bool vis[mx];
long long int dist[2][mx];
vector<pair<int,int> > vS[mx];
vector<pair<int,int> > vT[mx];
multiset<pair<int,int> > st;
pair<int,int> pr;

int dijkstra(int s,int t,int p){
    fill(vis,vis+mx,false);
    vector<pair<int,int> >*v;
    if(t==0)v=vS;
    else v=vT;
    dist[t][s]=0;
    int res=-1;
    st.insert({0,s});
    while(!st.empty()){
        pr=*st.begin();
        st.erase(st.begin());
        int nood=pr.second;
        if(dist[t][nood]>p  || vis[nood])continue;
        vis[nood]=true;
        for(int i=0;i<v[nood].size();i++){
            int child=v[nood][i].first;
            int weight=v[nood][i].second;
            if(t==1){
                if(dist[0][child]+dist[1][nood]+weight<=p && res<weight){
                    res=weight;
                }
            }
            if(dist[t][nood]+weight<dist[t][child]){
                dist[t][child]=dist[t][nood]+weight;
                st.insert({dist[t][child],child});


            }
        }
    }

    return res;

}

main(){
   // freopen("in.txt","r",stdin);
    int T,N,M,s,t,p,u,V,c;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d %d %d",&N,&M,&s,&t,&p);
        while(M--){
            scanf("%d %d %d",&u,&V,&c);
            vS[u].push_back(make_pair(V,c));
            vT[V].push_back(make_pair(u,c));
        }
        for(int i=0;i<=1;i++)
            for(int j=1;j<=N+3;j++)
                dist[i][j]=10000000000000;
        dijkstra(s,0,p);
        int res= dijkstra(t,1,p);
        cout<<res<<endl;
        memset(vS,NULL,sizeof(vS));
        memset(vT,NULL,sizeof(vT));
    }
    return 0;
}
