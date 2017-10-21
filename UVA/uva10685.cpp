#include<bits/stdc++.h>
using namespace std;
int arr[5000],sz[5000];
int rs=1;
void ini(int x){
    for(int i=1;i<=x;i++){
        arr[i]=i;
        sz[i]=1;
    }
}
int root(int i){
    while(arr[i]!=i){
        i=arr[i];
    }
    return i;
}

bool find(int A,int B)
{
    if( root(A)==root(B) )
    return true;
    else
    return false;
}
void unon(int a,int b){

   int x,y;
   x=root(a);
   y=root(b);
   if(sz[x]<sz[y]){
    arr[x]=arr[y];
    if(x!=y)sz[y]+=sz[x];
    if(sz[y]>rs)rs=sz[y];
   }
   else{
    arr[y]=arr[x];
    if(x!=y)sz[x]+=sz[y];
    if(sz[x]>rs)rs=sz[x];
   }


}
int main (){
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int t,f;
    string A,B,C;
    while(cin>>t>>f){
        if(t==0 &&f==0)break;
        vector<string>vec;
        ini(t);
        while(t--){
            cin>>C;
            vec.push_back(C);
        }

        while(f--){
            cin>>A>>B;
            int a,b;
            for(int i=0;i<vec.size();i++){
                if(vec[i]==A){a=i+1;}
                if(vec[i]==B){b=i+1;}
            }
            unon(a,b);
        }
        cout<<rs<<endl;
        rs=1;

    }
return 0;
}
