#include<bits/stdc++.h>
#define mx 1000001
int  arr[mx],m,a,n;
using namespace std;
pair<double,pair<int ,int> >p[mx];
pair<int,int>p1[mx];

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
double krushkal(pair<double,pair<int ,int> >p[],int edges){
    double mincost=0;
    int flg=0;
   for(int i=0;i<edges;i++){
        int x=p[i].second.first;
        int y=p[i].second.second;
              int X=root(x);
              int Y=root(y);
              if(X!=Y){
                    printf("%d %d\n",x,y)
                    arr[X]=Y;
                    flg=1;

              }

   }
   if(flg==0)printf("No new highways need\n");
}
int main(){
   // freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int i,j,t,x,y;
    double res;
    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        init(n);

        for(i=1;i<=n;i++){
            scanf("%d %d",&x,&y);
            p1[i]=make_pair(x,y);

        }
        scanf("%d",&m);
        while(m--){
            scanf("%d %d",&x,&y);
            y=root(y);
            x=root(x);
            if(x!=y)arr[x]=y;
        }
        double distance;int X=0;
        for(i=1;i<=n;i++){
            for(j=i;j<=n;j++){
                if(i!=j){
                    x=p1[i].first-p1[j].first;
                    y=p1[i].second-p1[j].second;
                    distance=sqrt(pow(x,2)+pow(y,2));
                    p[X]=make_pair(distance,make_pair(i,j));
                    X++;
                }
            }

        }

        sort(p,p+X);
        krushkal(p,X);
       if(t!=0)printf("\n");
    }

return 0;}


