#include<bits/stdc++.h>
#define mx 200001
int  arr[mx],n,m;
using namespace std;
pair<double,pair<int ,int> >p[mx];
pair<double ,double>p1[mx];
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
double krushkal(pair<double,pair<int ,int> >p[],int edges){
    double mincost=0;

   for(int i=0;i<edges;i++){
        if(root(0)==root(1))break;
        int x=p[i].second.first;
        int y=p[i].second.second;
        int X=root(x);
        int Y=root(y);
        if(X!=Y){
            if(mincost<p[i].first)mincost=p[i].first;
            arr[X]=arr[Y];

        }
   }
   return mincost;
}
int main(){
    //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int length,i,j,cnt=1;
    double x,y,res;
    while(true){
        cin>>m;
        if (m==0)break;
        init(m);
        int total=0;
        for(i=0;i<m;i++){
            cin>>x>>y;
            p1[i]=make_pair(x,y);
        }
        double distance;int X=0;
        for(i=0;i<m;i++){
            for(j=i;j<m;j++){
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
        res=krushkal(p,X);
        printf("Scenario #%d\nFrog Distance = %.3lf\n\n",cnt,res);
        cnt++;
    }

return 0;}
