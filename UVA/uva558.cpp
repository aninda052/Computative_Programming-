#include<bits/stdc++.h>
#define mx 2005
using namespace std;
int dis[mx];
struct X{
    int a,b,dist;
}vec[mx+5];
int bellmanFord(int N,int M){
    fill(dis,dis+mx,10000000);
    bool res=false;
    dis[0]=0;


    for(int i=0;i<N-1;i++){
        for(int j=0;j<M;j++){
            int nood=vec[j].a;
            int child=vec[j].b;
            int weight=vec[j].dist;
            if(dis[child]>dis[nood]+weight){
                dis[child]=dis[nood]+weight;
            }
        }
    }

    for(int i=0;i<M;i++){
        int nood=vec[i].a;
        int child=vec[i].b;
        int weight=vec[i].dist;
        if(dis[child]>dis[nood]+weight){
            res=true;
        }
    }
    return res;


}
main (){
    int c,n,m,x,y,t;
    scanf("%d",&c);
    while(c--){
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++){
            scanf("%d %d %d",&vec[i].a,&vec[i].b,&vec[i].dist);
        }
        if(bellmanFord(n,m))cout<<"possible"<<endl;
        else cout<<"not possible"<<endl;
    }

return 0;}

