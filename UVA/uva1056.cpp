#include<bits/stdc++.h>
#define mx 55
using namespace std;
bool vis[mx];
int lvl[mx];
vector<int>vec[mx];
map<string,int>mp;

int bfs(int n,int N){

    fill(vis,vis+N+2,false);
    fill(lvl,lvl+N+2,0);
    int cnt=1,maxdegree=0,tmp;
    lvl[n]=0;
    vis[n]=true;
    queue<int>q;
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
                maxdegree=max(maxdegree,lvl[child]);
                cnt++;
            }
        }
    }
    if(cnt!=N)return -1;
    else return maxdegree;
}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int P,R,casenum=1;
    string st1,st2;
    while(true){
        scanf("%d %d",&P,&R);
        if(P==0 && R==0)break;
        int x=1;
        while(R--){
            cin>>st1>>st2;

            if(!mp.count(st1)){
                mp[st1]=x;
                x++;
            }
            if(!mp.count(st2)){
                mp[st2]=x;
                x++;
            }

            vec[mp[st1]].push_back(mp[st2]);
            vec[mp[st2]].push_back(mp[st1]);
        }

        int tmp=-1,res;
        for(int j=1;j<=P;j++){
            res=bfs(j,P);
            tmp=max(res,tmp);
        }


        if(res==-1)printf("Network %d: DISCONNECTED\n\n",casenum);
        else printf("Network %d: %d\n\n",casenum,tmp);
        casenum++;

        mp.clear();
        memset(vec,NULL,sizeof(vec));





    }

return 0;
}
