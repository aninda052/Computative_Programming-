#include<bits/stdc++.h>
#define mx 30001
using namespace std;
int arr[mx],p[mx];
//vector<int>p;
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,r,s,i,x,y,res,j;
    cin>>t;
    while(t--){
        cin>>r;
        x=0;
        for(i=0;i<r;i++){
            cin>>s;
            if(arr[s]==0){p[x]=s;arr[s]=1;x++;}
            else arr[s]++;
        }
        int tmp=999999999;
        for(i=0;i<x-1;i++){
                res=0;
            for(j=0;j<x;j++){
                res+=abs(p[i]-p[j])*arr[p[j]];
            }
            if(res<tmp)tmp=res;
        }
        cout<<tmp<<endl;
        for(i=0;i<=mx;i++){
            arr[i]=0;
            p[i]=0;
        }

    }
return 0;
}
