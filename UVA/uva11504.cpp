#include<bits/stdc++.h>
#define mx 100010
using namespace std;
vector<int> v[mx];
bool vis[mx];
bool vis1[mx];
int discovery[mx];
vector<pair<int,int> >finishing;
int Time=0;
int DFS(int source,vector<int> vec[]){
    Time+=1;
    discovery[source]=Time;
    vis[source]=true;
    for(int i=0;i<vec[source].size();i++){
        if(vis[vec[source][i] ]==false){
            DFS(vec[source][i],vec );
        }
    }
    Time+=1;
    finishing.push_back(make_pair(Time,source));

}
main(){
    //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int case_num,n,m,x,y;
    scanf("%d",&case_num);
    while(case_num--){
        scanf("%d %d",&n,&m);
        int m1=m;
        int totalnum=0;
        fill(vis1,vis1+n+2,false);
        while(m--){
            scanf("%d %d",&x,&y);
            if(!vis1[x]){vis1[x]=true,totalnum=totalnum+1;}
            if(!vis1[y]){vis1[y]=true,totalnum=totalnum+1;}
            v[x].push_back(y);

        }

        fill(vis,vis+n+2,false);
        Time=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==false){
                DFS(i,v);

            }
        }
        sort(finishing.begin(),finishing.end());
        int cnt=0;
        fill(vis,vis+n+2,false);
        for(int i=finishing.size()-1;i>=0;i--){
            int X=finishing[i].second;
            if(vis[X]==false && vis1[X]){
                DFS(X,v);
                ++cnt;

            }
        }
        cout<<cnt+(n-totalnum)<<endl;
        memset(v,NULL,sizeof(v));
        finishing.clear();




    }

return 0;}
