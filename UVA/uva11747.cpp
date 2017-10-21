#include<bits/stdc++.h>
#define mx 1000000
int arr[1000001];
using namespace std;
pair<int,pair<int ,int> >p[mx];
int init(int n){
    for(int i=0;i<n;i++){
        arr[i]=i;
    }
}
int root(int i){
    while(arr[i]!=i){
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}

int krushkal(pair<int,pair<int ,int> >p[],int edges){
    int mincost=0,flg=0;
   for(int i=0;i<edges;i++){
        int x=p[i].second.first;
        int y=p[i].second.second;
        int X=root(x);
        int Y=root(y);
        if(X!=Y){
            arr[X]=arr[Y];
        }
        else {
            if(flg==1)cout<<" ";
            cout<<p[i].first;flg=1;
        }


   }
   if(flg==1)cout<<endl;
   if(flg==0)cout<<"forest"<<endl;
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int x,y,weight,edges,res,n,m;
    while(true){
        cin>>n>>m;
        init(n);
        if(n==0 && m==0)break;
        for(int i=0;i<m;i++){
            cin>>x>>y>>weight;
            p[i]=make_pair(weight,make_pair(x,y));
        }
        sort(p,p+m);
        res=krushkal(p,m);
    }

return 0;}
