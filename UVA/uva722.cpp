#include<bits/stdc++.h>
#define mx 105
#define valid(x,y,a,b) x>=0 && x<a && y>=0 && y<b
using namespace std;
string st[mx];
bool vis[mx][mx];
int len,nx,ny,X;
int fx[]= {1, -1, 0, 0};
int fy[]= { 0, 0, 1, -1};

int BFS(pair<int,int>p){
    memset(vis,false,sizeof(vis));
    int cnt =1;
    queue<pair<int,int> >q;
    q.push(p);
    while(!q.empty()){
        int noodf=q.front().first;
        int noods=q.front().second;
        vis[noodf][noods]=true;
        q.pop();
            for(int j=0;j<4;j++){
                int nx=noodf+fx[j];
                int ny=noods+fy[j];
                if(valid(nx,ny,X,len)){
                   if(vis[nx][ny]==false && st[nx][ny]==48){
                    q.push(make_pair(nx,ny));
                    vis[nx][ny]=true;
                    cnt++;

                   }

                }

            }
        //}
    }
    return cnt;

}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int I,J,T;
    string z;
    scanf("%d",&T);
    while(T--){
        X=0;
        scanf("%d %d",&I,&J);
        cin.ignore();
        while(getline(cin,z)){
            if(!z.size())break;
            st[X]=z;
            X++;
        }
        len=st[0].length();
        printf("%d\n",BFS(make_pair(I-1,J-1)));
        if(T!=0)printf("\n");



    }
    return 0;

}

