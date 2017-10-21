#include<bits/stdc++.h>
#define mx 105
using namespace std;
bool vis[mx];
bool chk[mx];
int lvl[mx];
int res[mx];
vector<int>vec[mx];
vector<int>V;

int bfs( int n){
    fill(vis,vis+mx,false);
    int paircnt=0;
    queue<int>q;
    q.push(n);
    vis[n]=true;
    lvl[n]=0;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(int i=0;i<vec[p].size();i++){
            if(vis[vec[p][i]]==false){
                lvl[vec[p][i] ]=lvl[p]+1;
                res[vec[p][i]]+=lvl[vec[p][i] ];
                q.push(vec[p][i]);
                vis[vec[p][i]]=true;
                paircnt++;

            }
        }

    }
return paircnt;
}

main (){
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int u,v,j=1;;
    while(true){
        scanf("%d %d",&u,&v);
        if(u==0 && v==0)break;
        vec[u].push_back(v);
        V.push_back(u);
        V.push_back(v);
        chk[u]=true;
        chk[v]=true;
        while(true){
            scanf("%d %d",&u,&v);
            if(u==0 && v==0)break;
            vec[u].push_back(v);
            if(chk[u]==false){
                V.push_back(u);
                chk[u]=true;
            }
            if(chk[v]==false){
                V.push_back(v);
                chk[v]=true;
            }
        }
        double pr=0;
        for(int i=0;i<V.size();i++){
            pr+=bfs(V[i]);
        }
        int pathlength=0;
        for(int i=1;i<105;i++){
            pathlength+=res[i];
        }
        double reslt;
        reslt=pathlength/pr;
        printf("Case %d: average length between pages = %.3lf clicks\n",j,reslt);
        j++;
        memset(vec,NULL,sizeof(vec));
        V.clear();
        fill(res,res+mx,0);
        fill(chk,chk+mx,false);
    }

return 0;}
