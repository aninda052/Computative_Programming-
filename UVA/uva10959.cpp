#include<bits/stdc++.h>
#define mx 1001
using namespace std;
int lvl[mx];
bool vis[mx];
vector<int>v[mx];
int bfs(int n){
    fill(lvl,lvl+n,0);
    fill(vis,vis+n,false);
    queue<int>q;
    vis[0]=true;
    lvl[0]=0;
    q.push(0);
    while(!q.empty()){
        int root=q.front();
        q.pop();
        for(int i=0;i<v[root].size();i++){
            if(vis[v[root][i] ]==false){
                lvl[v[root][i] ]=lvl[root]+1;
                q.push(v[root][i]);
                vis[v[root][i]]=true;
            }
        }
        if(q.empty())return -1;
    }

}
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test,p,d,ps1,ps2;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&p,&d);
        while(d--){
            scanf("%d %d",&ps1,&ps2);
            v[ps1].push_back(ps2);
            v[ps2].push_back(ps1);
        }
        bfs(p);
        for(int j=1;j<p;j++){
            printf("%d\n",lvl[j]);
        }
        memset(v,NULL,sizeof(v));
        if(test!=0)printf("\n");
    }
return 0;}
