#include<bits/stdc++.h>
#define mx 2501
using namespace std;
vector<int>vec[mx];
bool vis[mx];
int i,j,e,day[mx],D,M,res[mx];
int bfs(int root){
   fill(vis,vis+mx,false);
   fill(day,day+mx,0);
   fill(res,res+mx,0);
   D=-1;
    queue<int>que;
    que.push(root);
    vis[root]=true;
    day[root]=0;
    while(!que.empty()){
        int root=que.front();
        que.pop();
        for(i=0;i<vec[root].size();i++){
            if(vis[ vec[root][i] ]==false){
                day[vec[root][i]]=day[root]+1;
                res[day[root]+1 ]++;
                que.push(vec[root][i] );
                vis[vec[root][i] ]=true;
            }
            if(D<res[day[root]+1]){M=day[root]+1;D=res[day[root]+1]; }
        }

    if(que.empty())return -1;
    }

}
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,T,test,frnd;
    scanf("%d",&e);
    for(i=0;i<e;i++){
        scanf("%d",&n);
        while(n--){
            scanf("%d",&frnd);
            vec[i].push_back(frnd);
        }
    }
    scanf("%d",&T);
    while(T--){
        scanf("%d",&test);
        if(vec[test].empty()){printf("0\n");continue;}
        bfs(test);
        printf("%d %d\n",D,M);
    }

return 0;}
