#include<bits/stdc++.h>
#define mx 10005
using namespace std;
vector<pair<int,int> >v[mx];
bool vis[mx];
int prims(int strt,int ed){

    fill(vis,vis+105,false);
    int res=100000000;
    priority_queue<pair<int,int> > q;
    q.push(make_pair(100000000,strt));

    while(!q.empty()){
        pair<int,int> p=q.top();
        q.pop();
        int nood=p.second;
        if(vis[nood])continue;
        vis[nood]=true;
        res=min(res,p.first);
        for(int i=0;i<v[nood].size();i++){
            int cost=v[nood][i].second;
            int child=v[nood][i].first;
            if(vis[child]!=true){
                q.push(make_pair(cost,child));
            }
            if(vis[ed])return res;
        }
    }



}
main(){
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int s,d,t,p,c1,c2,cs=1,N,R;
    while(true){
        scanf("%d %d",&N,&R);
        if(N==0 && R==0)break;
        for(int i=0;i<R;i++){
            scanf("%d %d %d",&c1,&c2,&p);
            v[c1].push_back(make_pair(c2,p));
            v[c2].push_back(make_pair(c1,p));
        }
        scanf("%d %d %d",&s,&d,&t);
        int X=prims(s,d)-1;
        if(t%X)printf("Scenario #%d\nMinimum Number of Trips = %d\n\n",cs,(t/X)+1);
        else printf("Scenario #%d\nMinimum Number of Trips = %d\n\n",cs,t/X);
        memset(v,NULL,sizeof(v));
        cs++;
    }

    return 0;
}
