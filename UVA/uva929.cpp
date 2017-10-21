#include<bits/stdc++.h>
#define mx 1000000
using namespace std;
int arr[mx];
bool vis[mx];
int dist[mx];
multiset< pair< int ,int> > st;
pair<int,int>pr;
vector<pair<int,int> > v[mx];
int dijkstra(int ed){
    fill(dist,dist+ed+1,10000000);
    fill(vis,vis+ed+1,false);
    dist[1]=arr[1];
    st.insert({arr[1],1});
    while(!st.empty()){
        pr=*st.begin();
        st.erase(st.begin());
        int nood=pr.second;
        if(vis[nood])continue;
        vis[nood]=true;
        for(int i=0;i<v[nood].size();i++){
            int child=v[nood][i].first;
            int weight=v[nood][i].second;
            if(dist[nood]+weight<dist[child]){
                dist[child]=dist[nood]+weight;
                st.insert({dist[child],child});
            }
        }
    }
    return dist[ed];
}
main (){
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int t,n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        int num=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[num]);
                num++;
            }
        }
        if(n==1 && m==1){printf("%d\n",arr[1]);continue;}
        for(int i=1;i<=n*m;i++){
            if((i+1)%m!=1)v[i].push_back(make_pair(i+1,arr[i+1]));
            if((i-1)%m!=0)v[i].push_back(make_pair(i-1,arr[i-1]));
            if((i+m)<=n*m)v[i].push_back(make_pair(i+m,arr[i+m]));
            if((i-m)>0)v[i].push_back(make_pair(i-m,arr[i-m]));

        }
        printf("%d\n",dijkstra(n*m));
        memset(v,NULL,sizeof(v));
    }

return 0;}
