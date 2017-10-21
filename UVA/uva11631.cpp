#include<bits/stdc++.h>
#define mx 200001
int arr[mx],n;
using namespace std;
pair<int,pair<int ,int> >p[mx];
void init(int n){
    for(int i=0;i<n;i++){
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
//int unin(int x,int y){
 //   int i=root(x);
//    int j=root(y);
//    arr[i]=arr[j];
//}
int krushkal(pair<int,pair<int ,int> >p[],int edges){
    int mincost=0;
    int cnt=1;
   for(int i=0;i<edges;i++){
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
    //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int x,y,length,res,m;
    while(scanf("%d %d",&n,&m)){
        if(n==0 && m==0)break;
        init(n);
        int total=0;
        for(int i=0;i<m;i++){
            scanf("%d %d %d",&x,&y,&length);
            total+=length;
            p[i]=make_pair(length,make_pair(x,y));
        }
        sort(p,p+m);
        res=krushkal(p,m);
        printf("%d\n",total-res);
    }

return 0;}
