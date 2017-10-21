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
    int cnt=1;
   // cout<<edges<<endl;
   for(int i=0;i<edges;i++){
        int x=p[i].second.first;
        int y=p[i].second.second;
        int X=root(x);
        int Y=root(y);
        if(X!=Y){
            mincost+=p[i].first;
            arr[X]=arr[Y];

        }
   }
   return mincost;
}
int main(){
    //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int length,i,j;
    double x,y,res;
    cin>>n;
    while(n--){
        cin>>m;
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
        printf("%.2lf\n",res);
        if(n!=0)printf("\n");
    }

return 0;}
