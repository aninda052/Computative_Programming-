#include<bits/stdc++.h>
#define mx 10000
using namespace std;
bool vis[mx];
int lvl[mx],p,i;
vector<int>v[mx];
int bfs(int n,int m){
    fill(vis,vis+mx,false);
    queue<int>q;
    q.push(n);
    lvl[n]=0;
    while(!q.empty()){
        p=q.front();
        vis[p]=true;
        q.pop();
        int flg=0;
        for(i=0;i<v[p].size();i++){
            if(vis[v[p][i]]==false){
                lvl[v[p][i]] =lvl[p]+1;
                if(v[p][i]==m){flg=1;break;}
                q.push(v[p][i]);
                vis[v[p][i]]=true;
            }
            if(flg==1)break;
        }
        if(flg==0 && q.empty())return -1;
        if(flg==1)break;
    }
    return lvl[v[p][i]];

}
 main (){
     //freopen("in.txt","r",stdin);
     //freopen("out.txt","w",stdout);
     int cse,p,n,m,conv,siz,j;
     string st,st1,st2;
     map<string,int>work;
     printf("SHIPPING ROUTES OUTPUT\n\n");
     scanf("%d",&cse);
     for(j=1;j<=cse;j++){
          scanf("%d %d %d",&m,&n,&p);
          conv=1;
          while(m--){
            cin>>st;
            work[st]=conv;
            conv++;
          }
          int tmp=n;
          while(n--){
            cin>>st1>>st2;
            v[work[st1]].push_back(work[st2]);
            v[work[st2]].push_back(work[st1]);

          }
          printf("DATA SET  %d\n\n",j);
          while(p--){
            cin>>siz>>st1>>st2;
            int x=work[st1];
            int y=work[st2];
            int res=bfs(x,y);
            if(res<0 || tmp==0)printf("NO SHIPMENT POSSIBLE\n");
            else printf("$%d\n",res*100*siz);
          }
          printf("\n");
        memset(v,NULL,sizeof(v));

     }
    printf("END OF OUTPUT\n");
 return 0;}
