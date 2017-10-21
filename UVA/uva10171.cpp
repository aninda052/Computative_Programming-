#include<bits/stdc++.h>
#define mx 30
using namespace std;

vector<pair<int,int> >vy[mx];
vector<pair<int,int> >vm[mx];
map<string,int> mp;
map<int,string> mp1;
bool vis[mx];
int dis[mx];
int Ydis[mx];
int Mdis[mx];

int dijkstra(int n,int m){
    fill(vis,vis+mx,false);
    fill(dis,dis+mx,10000000);
    multiset<pair<int,int> >ms;
    vector<pair<int,int> >*vec;
    if(m==0){vec=vy;Ydis[n]=0;}
    if(m==1){vec=vm;Mdis[n]=0;}
    ms.insert({0,n});
    dis[n]=0;
    while(!ms.empty()){
        pair<int,int>pr=*ms.begin();
        ms.erase(ms.begin());
        int nood=pr.second;
        if(vis[nood])continue;
        vis[nood]=true;
        for(int i=0;i<vec[nood].size();i++){
            int child=vec[nood][i].first;
            int weight=vec[nood][i].second;
            if(weight+dis[nood]<dis[child]){
                dis[child]=weight+dis[nood];
                ms.insert({dis[child],child});
                if(m==0)Ydis[child]=dis[child];
                if(m==1)Mdis[child]=dis[child];
            }
        }
    }

}
main(){
   // freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int N;
    string X,Y;
    while(true){
        scanf("%d",&N);
        if(N==0)break;
        int x=1;
        mp.clear();
        mp1.clear();
        memset(vm,NULL,sizeof(vm));
        memset(vy,NULL,sizeof(vy));
        while(N--){
            string a,b,c,d;
            int cost;
            cin>>a>>b>>c>>d>>cost;
            if(!mp.count(c)){
                mp[c]=x;
                mp1[x]=c;
                x++;
            }
            if(!mp.count(d)){
                mp[d]=x;
                mp1[x]=d;
                x++;
            }
            if(a=="Y"){
                if(b=="B"){
                    vy[mp[c]].push_back(make_pair(mp[d],cost));
                    vy[mp[d]].push_back(make_pair(mp[c],cost));
                }
                else vy[mp[c]].push_back(make_pair(mp[d],cost));
            }
            if(a=="M"){
                if(b=="B"){
                    vm[mp[c]].push_back(make_pair(mp[d],cost));
                    vm[mp[d]].push_back(make_pair(mp[c],cost));
                }
                else vm[mp[c]].push_back(make_pair(mp[d],cost));
            }
        }


        cin>>X>>Y;
        if(!mp.count(X)){
            if(X==Y)cout<<"0 "<<X<<endl;
            else cout<<"You will never meet."<<endl;
            continue;
        }


        fill(Mdis,Mdis+mx,-1);
        fill(Ydis,Ydis+mx,-1);
        dijkstra(mp[X],0);
        dijkstra(mp[Y],1);
        int res=10000000;
        for(int j=1;j<=x+1;j++){
            if(Mdis[j]>=0 && 0<=Ydis[j]){
                int tmp=Ydis[j]+Mdis[j];
                res=min(tmp,res);
            }
        }
        vector<string>reslt;
        for(int j=1;j<=x+1;j++){
            if(Mdis[j]+Ydis[j]==res){
                reslt.push_back(mp1[j]);
            }
        }





        if(res==10000000){cout<<"You will never meet."<<endl;continue;}
        sort(reslt.begin(),reslt.end());
        cout<<res;
        for(int k=0;k<reslt.size();k++){
            cout<<" "<<reslt[k];
        }
        cout<<endl;
        reslt.clear();


    }

return 0;}
