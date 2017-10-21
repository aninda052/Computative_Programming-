#include<bits/stdc++.h>
#define mx 100001
int arr[mx],n,a,cnt;
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
    int mincost=0;cnt=1;
   for(int i=0;i<edges;i++){
        if(a<=p[i].first)break;
        int x=p[i].second.first;
        int y=p[i].second.second;
        int X=root(x);
        int Y=root(y);
        if(X!=Y){
            mincost+=p[i].first;
            arr[Y]=arr[X];
            cnt++;


        }
   }
   return mincost;
}
int main(){
    //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int x,y,cost,res,m,k,i,t;
    cin>>t;
    for(k=1;k<=t;k++){
        scanf("%d %d %d",&n,&m,&a);
        init(n);
        for(i=0;i<m;i++){
            scanf("%d %d %d",&x,&y,&cost);
            p[i]=make_pair(cost,make_pair(x,y));
        }
        sort(p,p+i);
        res=krushkal(p,i);
        cnt=(n-cnt)+1;
        printf("Case #%d: %d %d\n",k,(a*cnt)+res,cnt);



    }

return 0;}
