#include<bits/stdc++.h>
#define mx 1000000
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
int krushkal(pair<int,pair<int ,int> >p[],int edges){
    int minmx,flg=0,cnt=1;
   for(int i=0;i<edges;i++){
        int x=p[i].second.first;
        int y=p[i].second.second;
        int X=root(x);
        int Y=root(y);
        if(X!=Y){
            minmx=p[i].first;
            arr[Y]=arr[X];
            cnt++;
        }
   }
   if(cnt==n)printf("%d\n",minmx);
   else printf("IMPOSSIBLE\n");
}
int main(){
   // freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int m,i,c1,c2,d;
    while(true){
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)break;
        init(n);
        for(i=0;i<m;i++){
            scanf("%d %d %d",&c1,&c2,&d);
            p[i]=make_pair(d,make_pair(c1,c2));
        }
        sort(p,p+i);
        krushkal(p,i);
    }

return 0;}

