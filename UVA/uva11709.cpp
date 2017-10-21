#include<bits/stdc++.h>
#define mx 1005
using namespace std;
map<string,int>mp;
vector<int>v[mx];
vector<int>v_rev[mx];
bool vis[mx];
vector<pair<int,int> > finishing;
int Time=0;
int DFS(int source,vector<int>vec[]){
    Time=Time+1;
    vis[source]=true;
    for(int i=0;i<vec[source].size();i++){
        if(vis[vec[source][i] ]==false){
            DFS(vec[source][i],vec);
        }
    }
    Time=Time+1;
    vis[source]=true;
    finishing.push_back(make_pair(Time,source));
}
 main (){
    //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
     int P,T;
     string name,X,Y;
     while(scanf("%d %d",&P,&T)){
        if(P==0 && T==0)break;

        cin.ignore();
        for(int i=0;i<P;i++){
            getline(cin,name);
            mp[name]=i;

        }

        for(int i=0;i<T;i++){
            getline(cin,X);
            getline(cin,Y);
            v[mp[X]].push_back(mp[Y]);
            v_rev[mp[Y]].push_back(mp[X]);
        }

        fill(vis,vis+P+2,false);
        Time=0;
        for(int i=0;i<P;i++){
            if(vis[i]==false){
                DFS(i,v);

            }

        }

        sort(finishing.begin(),finishing.end());
        fill(vis,vis+P+2,false);
        int cnt=0;
        for(int i=P-1;i>=0;i--){
            if(vis[finishing[i].second ]==false){
                DFS(finishing[i].second,v_rev);
                cnt++;
            }

        }
        cout<<cnt<<endl;
        memset(v,NULL,sizeof(v));
        memset(v_rev,NULL,sizeof(v_rev));
        finishing.clear();

     }

 return 0;}
