
#include<bits/stdc++.h>
#define mx 10000
using namespace std;
bool vis[mx];
int path[mx],p,i;;
map<string,int>work;
map<int,string>work1;
vector<int>v[mx];
vector<int>reslt;
int fnd(int i){
    while(i!=path[i]){
        reslt.push_back(i);
        reslt.push_back(path[i]);
        i=path[i];

    }
}
int bfs(int n,int m){
    fill(vis,vis+mx,false);
    queue<int>q;
    q.push(n);
    path[n]=n;
    while(!q.empty()){
        p=q.front();
        vis[p]=true;
        q.pop();
        int flg=0;
        for(i=0;i<v[p].size();i++){
            if(vis[v[p][i]]==false){
                path[v[p][i]] =p;
                if(v[p][i]==m){flg=1;break;}
                q.push(v[p][i]);
                vis[v[p][i]]=true;
            }
            if(flg==1)break;
        }
        if(flg==0 && q.empty())return -1;
        if(flg==1)break;
    }


}
 main (){
     //freopen("in.txt","r",stdin);
     //freopen("out.txt","w",stdout);
     int cse,p,n,m,cnv,siz,j,x,y,flg=0;
     string st,st1,st2;
            scanf("%d",&cse);
          while(cse--){
            if(flg!=0)printf("\n");
            scanf("%d %d",&m,&n);
            cnv=1;
            while(m--){
                cin>>st1>>st2;
                //x=work[st1];
                //y=work[st2];
                if(!work.count(st1)){
                        work[st1]=cnv;
                        work1[cnv]=st1;
                        cnv++;
                }
                if(!work.count(st2)){
                        work[st2]=cnv;
                        work1[cnv]=st2;
                        cnv++;
                }
                v[work[st1]].push_back(work[st2]);
                v[work[st2]].push_back(work[st1]);
            }
            while(n--){
                cin>>st1>>st2;
                x=work[st1];
                y=work[st2];
                int tmp=bfs(x,y);
                fnd(y);
                for(j=reslt.size()-1;j>=0;j-=2){
                    cout<<work1[reslt[j]][0];
                }
                cout<<work1[reslt[0]][0]<<endl;
                reslt.clear();
            }
            work.clear();
            work1.clear();

            memset(v,NULL,sizeof(v));
          flg=1;
          }

 return 0;}
