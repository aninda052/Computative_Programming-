#include<bits/stdc++.h>
#define mx 200001
int arr[mx],n;
using namespace std;
pair<int,pair<int ,int> >p[mx];
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
int krushkal(pair<int,pair<int ,int> >p[],int edges){
    int mincost=0;
    int cnt=1;
   for(int i=1;i<edges;i++){
        int x=p[i].second.first;
        int y=p[i].second.second;
        int X=root(x);
        int Y=root(y);
        if(X!=Y){
            mincost+=p[i].first;
            arr[X]=arr[Y];
            cnt++;

        }
        if(cnt==n)break;
   }
   return mincost;
}
int main(){
   // freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int x,y,length,res,res1,m,k,i,flg=0;
    while(cin>>n){

        init(n);
        int total=0;
        for(i=1;i<n;i++){
            scanf("%d %d %d",&x,&y,&length);
            p[i]=make_pair(length,make_pair(x,y));
        }
        sort(p,p+i);
        res=krushkal(p,i);
        scanf("%d",&k);
        while(k--){
            scanf("%d %d %d",&x,&y,&length);
            p[i]=make_pair(length,make_pair(x,y));
            i++;
        }
        scanf("%d",&m);
        while(m--){
            scanf("%d %d %d",&x,&y,&length);
        }
        init(n);
        sort(p,p+i);
        res1=krushkal(p,i);
        if(flg)printf("\n");
        printf("%d\n%d\n",res,res1);
        flg=1;

    }

return 0;}
