#include<bits/stdc++.h>
#define mx 205
using namespace std;
vector<int>vec[mx];
int color[mx];
void sol(){
    fill(color,color+mx,-1);
    queue<int>q;
    bool flg=false;
    q.push(0);
    color[0]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<vec[u].size();i++){
            int v=vec[u][i];
            if(color[v]==-1){
                if(color[u]==0)color[v]=1;
                else color [v]=0;
                q.push(v);
            }
            else{
                if(color[u]==color[v]){flg=true;break;}
            }

        }
        if(flg){printf("NOT BICOLORABLE.\n");break;}

    }
    if(!flg)printf("BICOLORABLE.\n");

}

main(){
    int n,l,x,y;
    while(scanf("%d",&n)&& n!=0){
        scanf("%d",&l);
        while(l--){
            scanf("%d %d",&x,&y);
            vec[x].push_back(y);
            vec[y].push_back(x);
        }
        sol();
        memset(vec,NULL,sizeof vec);
    }

return 0;}
