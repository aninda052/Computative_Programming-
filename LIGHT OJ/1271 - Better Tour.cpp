#include<bits/stdc++.h>
#define mx 50003
using namespace std;

vector<int>v[mx];
vector<int>res;
queue<int>q;
bool vis[mx],flg;
int path[mx];

void inti(){

    for(int i=1;i<=50000;i++)path[i]=i;
}

void bfs(int strt,int des){

    flg=false;
    q.push(strt);
    vis[strt]=true;
    while(!q.empty()){
        int root=q.front();
        q.pop();
        sort(v[root].begin(),v[root].end());
        for(int i=0;i<v[root].size();i++){
            int a=v[root][i];
            if(!vis[a]){
                vis[a]=true;
                q.push(a);
                path[a]=root;
            }
            if(vis[des]){flg=true;break;}
        }
        if(flg){
            while(!q.empty())q.pop();
            break;
        }
    }
}

int findpath(int i){

    while(i!=path[i]){
        res.push_back(path[i]);
        i=path[i];
    }
}

int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,n,x;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        memset(v,NULL,sizeof v);
       // memset(res,NULL,sizeof res);
        res.clear();
        fill(vis,vis+mx,false);

        inti();
        scanf("%d",&n);
        scanf("%d",&x);
        int tmp=x;
        int fst=x;
        for(int j=1;j<n;j++){
            scanf("%d",&x);
            v[tmp].push_back(x);
            v[x].push_back(tmp);
            tmp=x;

        }
        bfs(fst,x);
        findpath(x);
        printf("Case %d:\n",i);
        for(int k=res.size()-1;k>=0;k--)printf("%d ",res[k]);
        printf("%d\n",x);



    }


    return 0;
}


