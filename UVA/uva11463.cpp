#include<bits/stdc++.h>
#define mx 105
using namespace std;
bool vis[mx];
int lvl[mx],vertex;
vector<int>vec[mx];
int s,d;
int bfs(int n){

    fill(vis,vis+mx,false);
    vis[n]=true;
    lvl[n]=0;
    queue<int> q;
    q.push(n);
    while(!q.empty()){
        int nood=q.front();
        q.pop();
        for(int i=0;i<vec[nood].size();i++){
            int child=vec[nood][i];
            if(vis[child]==false){
                lvl[child]=lvl[nood]+1;
                q.push(child);
                vis[child]=true;
            }
        }
    }
    return (lvl[d]-lvl[s])+(lvl[s]*2);
}
main (){
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int T,N,R,u,v;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        memset(vec,NULL,sizeof(vec));
        scanf("%d %d",&N,&R);
        int r1=R;
        while(R--){
            scanf("%d %d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);

        }
        scanf("%d %d",&s,&d);
        if(r1==1){
            cout<<"Case "<<i<<": 1"<<endl;
            continue;
        }
        int tmp=0;
        for(int k=0;k<N;k++){
            tmp=max(tmp,bfs(k));
        }
        cout<<"Case "<<i<<": "<<tmp<<endl;


    }

return 0;}
