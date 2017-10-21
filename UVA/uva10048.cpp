
#include<bits/stdc++.h>
#define mx 10005
using namespace std;
vector<pair<int,int> >v[mx];
bool vis[mx];
int prims(int strt,int ed){
    fill(vis,vis+105,false);
    int res=-1;
    multiset<pair<int,int> > m;
    m.insert({0,strt});

    while(!m.empty()){

        pair<int,int> p=*m.begin();
        m.erase(m.begin());
        int nood=p.second;

        if(vis[nood])continue;
        vis[nood]=true;
        res=max(res,p.first);
        for(int i=0;i<v[nood].size();i++){
            int cost=v[nood][i].second;
            int child=v[nood][i].first;
            if(vis[child]!=true){
                m.insert({cost,child});
            }
            if(vis[ed])return res;
        }
    }

    if(vis[ed]==false) return -2;

}
main(){
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int i,c,s,q,c1,c2,d,cs=1;
    while(true){

        scanf("%d %d %d",&c,&s,&q);
        if(c==0 && s==0 && q==0)break;
        if(cs!=1)cout<<endl;
        for(i=0;i<s;i++){
            scanf("%d %d %d",&c1,&c2,&d);
            v[c1].push_back(make_pair(c2,d));
            v[c2].push_back(make_pair(c1,d));
        }
        printf("Case #%d\n",cs);
        for(i=0;i<q;i++){
            scanf("%d %d",&c1,&c2);
            int x=prims(c1,c2);
            if(x==-2)cout<<"no path"<<endl;
            else cout<<x<<endl;
        }
        memset(v,NULL,sizeof(v));
        cs++;
    }

    return 0;
}
