#include<bits/stdc++.h>
#define mx 250
using namespace std;

bool vis[mx];
int dist[mx];
vector<pair<int,int> > vec[mx];
multiset<pair<int,int> > ms;
map<string,int>mp;
map<int,string>mp1;

int dijkstra(int n,int N){

    fill(dist,dist+N+2,100000000);
    fill(vis,vis+N+2,false);
    dist[n]=0;
    ms.insert({0,n});
    while(!ms.empty()){

        pair<int,int> pr=*ms.begin();
        ms.erase(ms.begin());
        int nood=pr.second;
        if(vis[nood]==true)continue;
        vis[nood]=true;

        for(int i=0;i<vec[nood].size();i++){

            int child=vec[nood][i].first;
            int weight=vec[nood][i].second;
            if(weight+dist[nood]<dist[child]){
                dist[child]=weight+dist[nood];
                ms.insert({dist[child],child});
            }
        }
    }
    int mincost=0;
    for(int i=1;i<=N;i++){
        mincost+=dist[i];
    }
    return mincost;

}



 main(){

     int N,M,x,y,cost,casenum=1;
     string str;
     while(true){
        scanf("%d %d",&N,&M);
        if(N==0 && M==0 )break;
        for(int i=1;i<=N;i++){
            cin>>str;
            mp[str]=i;
            mp1[i]=str;
        }
        for(int i=1;i<=M;i++){
            scanf("%d %d %d",&x,&y,&cost);
            vec[x].push_back(make_pair(y,cost));
            vec[y].push_back(make_pair(x,cost));
        }


        int tmp=10000000,res;
        for(int i=1;i<=N;i++){
            int mincost=dijkstra(i,N);
            if(mincost<tmp){
                tmp=mincost;
                res=i;
            }
        }
        cout<<"Case #"<<casenum<<" : "<<mp1[res]<<endl;
        casenum++;
        mp.clear();
        mp1.clear();
        memset(vec,NULL,sizeof(vec));


     }

 return 0;}
