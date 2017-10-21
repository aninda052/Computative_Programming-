#include<bits/stdc++.h>
#define mx 10005
using namespace std;
pair<int,pair<int ,int> >muri[mx];
int arr[mx],L,N,k;
pair<int,pair<int ,int> >p[mx];

void init(int n){
    for(int i=0;i<=n;i++){
        arr[i]=i;
    }
}
int root(int i){
    while(arr[i]!=i){
        arr[i] = arr[arr[i]];
        i=arr[i];
    }
    return i;
}

int krushkal(pair<int,pair<int ,int> >p[],int edges,int flg){
    int mincost=0;
    L=0;
    int cnt=1;
   for(int i=0;i<edges;i++){
        int x=p[i].second.first;
        int y=p[i].second.second;
        int X=root(x);
        int Y=root(y);
        int cost=p[i].first;
        if(flg==0){
            if(X!=Y){
            mincost+=cost;
            arr[X]=arr[Y];
            muri[L]=make_pair(cost,make_pair(x,y));
            L++;

            }
        }
        else if(X!=Y && muri[k]!=p[i] ){
            mincost+=p[i].first;
            arr[X]=arr[Y];
            cnt ++;
        }
   }
   if(flg!=0 && cnt!=N)return -1;
   return mincost;
}

main(){
   // freopen("in.txt","r",stdin);
  // freopen("out.txt","w",stdout);
    int T,M,A,B,C;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&N,&M);
        for(int j=0;j<M;j++){
            scanf("%d %d %d",&A,&B,&C);
            p[j]=make_pair(C,make_pair(A,B));
        }
        sort(p,p+M);
        init(N);
        int res=krushkal(p,M,0);
        printf("%d ",res);
        int TMP=100000000;
        int l=L;
        for(k=0;k<l;k++){
            init(N);
            int res1= krushkal(p,M,1);
            if(res1>=res){
                TMP=min(TMP,res1);
            }

        }
        if(TMP==100000000)TMP=res;
        printf("%d\n",TMP);

    }

return 0;}
