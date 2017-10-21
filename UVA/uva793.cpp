#include<bits/stdc++.h>
int arr[100000],sz[100000];
using namespace std;
int ini(int x){
    for(int i=1;i<=x;i++){
        arr[i]=i;
        sz[i]=1;
    }
}
int root(int n){
    while(arr[n]!=n){
        n=arr[n];
    }
    return n;
}
void unon(int a,int b){
    int A=root(a);
    int B=root(b);
    if(sz[A]<sz[B]){
        arr[A]=arr[B];
        if(A!=B)sz[B]+=sz[A];

    }
    else{
        arr[B]=arr[A];
        if(A!=B)sz[A]+=sz[B];
    }


}
int check(int a,int b){
    int A=root(a);
    int B=root(b);
    if(A==B) return 1;
    else return -1;
 }

int main (){
    int t,a,b;
    char c;
    string st;
    cin>>t;
    while(t--){
      int num,success=0,unsuccess=0;;
      scanf("%d\n\n",&num);
      ini(num);
      while(true){
        if(!getline(cin,st)||st.empty())break;
        sscanf(st.c_str(),"%c %d %d",&c,&a,&b);
        if(c=='c'){unon(a,b);}
        else{
             int p=check(a,b);
            if(p==1)success++;
            else unsuccess++;
        }
      }
     cout<<success<<","<<unsuccess<<endl;
     if(t!=0)cout<<endl;


    }
return 0;}
