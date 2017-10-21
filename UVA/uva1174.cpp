#include<bits/stdc++.h>
#define mx 80000
using namespace std;
map<string,string>arr;
pair<int,pair<string,string> > p[mx];
string root(string i){
    while(arr[i]!=i){
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}
int krushkal(pair<int,pair<string,string> > p[],int edges){
    int mincost=0;
    for(int i=0;i<edges;i++){
        string x=p[i].second.first;
        string y=p[i].second.second;
        string X=root(x);
        string Y=root(y);
        if(X!=Y){
           mincost+=p[i].first;
           arr[X]=Y;
        }
    }
    return mincost;
}
main (){
    int cost,res,t,m,n;
    string stg1,stg2;
    scanf("%d",&t);
    while(t--){
        scanf("%d\n%d",&m,&n);

        for(int i=0;i<n;i++){
            cin>>stg1>>stg2>>cost;
            p[i]=make_pair(cost,make_pair(stg1,stg2));
            arr[stg1]=stg1;
            arr[stg2]=stg2;
        }
        sort(p,p+n);
        res=krushkal(p,n);
        printf("%d\n",res);
        if(t!=0)printf("\n");
    }


return 0;}
