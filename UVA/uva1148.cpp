
#include<bits/stdc++.h>
#define mx 100001
using namespace std;
vector<int>vec[mx];
bool vis[mx];
int i,j,e,lvl[mx],x;
int bfs(int root,int chk){
    fill(vis,vis+mx,false);
    queue<int>que;
    que.push(root);
    vis[root]=true;
    lvl[root]=-1;
    while(!que.empty()){
        int root=que.front();
        que.pop();
        for(i=0;i<vec[root].size();i++){
            if(vis[ vec[root][i] ]==false){
                lvl[vec[root][i]]=lvl[root]+1;
                que.push(vec[root][i] );
                vis[vec[root][i] ]=true;
            }
            if(vis[chk])return lvl[vec[root][i]];
        }

    }

}
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n=0,test,frnd,c,c1,c2,numfrnd;
    scanf("%d",&test);
    while(test--){
            if(n!=0)printf("\n");
            scanf("%d",&e);
            for(i=0;i<e;i++){
                scanf("%d %d",&c,&numfrnd);
                while(numfrnd--){
                    scanf("%d",&frnd);
                    vec[c].push_back(frnd);
                }
            }
            scanf("%d %d",&c1,&c2);
            printf("%d %d %d\n",c1,c2,bfs(c1,c2));
            memset(vec,NULL,sizeof(vec));
            n=1;
    }

return 0;}
