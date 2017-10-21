#include<bits/stdc++.h>
#define mx 21
using namespace std;
bool vis[mx];
int lvl[mx],p,i;
int res[21][21];
vector<int>v[mx];
void bfs(){
   for(int n=1;n<=20;n++){
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
                    q.push(v[p][i]);
                    vis[v[p][i]]=true;
                    res[n][v[p][i]]=lvl[p]+1;
                }

            }

        }
   }

}
 main (){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
     int cse=1,p,n,m,conv,siz,j,st1,strt,ed;
     while(cin>>n){
        int x=1;
        while(n--){
            cin>>st1;
            v[x].push_back(st1);
            v[st1].push_back(x);
        }
         for(int x=2;x<20;x++){
              scanf("%d",&n);
              while(n--){
                cin>>st1;
                v[x].push_back(st1);
                v[st1].push_back(x);

              }
         }
         bfs();
         printf("Test Set #%d\n",cse);
         scanf("%d",&m);
         while(m--){
            scanf("%d %d",&strt,&ed);
            if(strt<10)printf(" %d to ",strt);
            else printf("%d to ",strt);
            if(ed<10)printf(" %d: %d\n",ed,res[strt][ed]);
            else printf("%d: %d\n",ed,res[strt][ed]);

         }

          if(j!=cse)printf("\n");
          cse++;
        memset(v,NULL,sizeof(v));
        memset(res,0,21);

     }

 return 0;}
