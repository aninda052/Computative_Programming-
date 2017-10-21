#include<bits/stdc++.h>
#define mx 10005
using namespace std;
int arr[mx],L,N,k;
pair< pair<int,pair<int ,int> >,int >p[mx];
int muri[mx];
int cnt,cnt1;
void init(int n){
    for(int i=1;i<=n;i++){
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

int krushkal(pair<pair<int,pair<int ,int> >,int >p[],int edges,int flg){
    int mincost=0;
    L=0;
    cnt=1;cnt1=1;
   for(int i=0;i<edges;i++){
        int x=p[i].first.second.first;
        int y=p[i].first.second.second;
        int X=root(x);
        int Y=root(y);
        int cost=p[i].first.first;
        if(flg==0){
            if(X!=Y){
            mincost+=cost;
            arr[Y]=X;
            muri[L]=p[i].second;
            L++;
            cnt1++;

            }
        }
        else if(X!=Y && muri[k]!=p[i].second ){
            mincost+=cost;
            arr[X]=arr[Y];
            cnt ++;
        }
   }
   if(flg!=0 && cnt!=N)return -1;
   return mincost;
}

main(){
    //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int T,M,A,B;
    int C;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d %d",&N,&M);
        int tmpM=M;
        int j=0;
        while(tmpM--){
            scanf("%d %d %d",&A,&B,&C);
                p[j]=make_pair(make_pair(C,make_pair(A,B)),j);
                j++;
        }
        if(N-1>M){
            printf("Case #%d : No way\n",i);
            continue;
        }
        sort(p,p+M);
        init(N);
        int res=krushkal(p,M,0);
        if(cnt1!=N){
                printf("Case #%d : No way\n",i);
                continue;
            }
        if(N-1==M || N==1){
            printf("Case #%d : No second way\n",i);
            continue;
        }
        int TMP=2147483647;
        int l=L;
        for(k=0;k<l;k++){
            init(N);
            int res1= krushkal(p,M,1);
            if(res1>=res){
                TMP=min(TMP,res1);
            }

        }
        if(TMP==2147483647)printf("Case #%d : No second way\n",i);
        else printf("Case #%d : %d\n",i,TMP);

    }

return 0;}

