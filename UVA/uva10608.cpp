#include<bits/stdc++.h>
using namespace std;
int arr[30005],flg[30005];

void ini(){
    for(int i=1;i<=30000;i++){
        arr[i]=i;
    }
}
void unon(int a,int b,int N){

    int tmp=arr[a],cnt=0;
    for(int i=1;i<=N;i++){
        if(arr[i]==tmp){
            arr[i]=arr[b];
        }
        else arr[a]=arr[b];
    }
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int t,m,n,A,B;
    cin>>t;
    while(t--){
        memset(flg,0,sizeof flg);
        ini();
        cin>>n>>m;
        if(m==0)cout<<"1"<<endl;
        else{
              while(m--){
                cin>>A>>B;
                unon(A,B,n);
                }
              for(int i=1;i<=n;i++){
              flg[arr[i]]++;
              }
              int mx=0;
              for(int i=1;i<=n;i++){
                if(mx<flg[i])mx=flg[i];
              }
              cout<<mx<<endl;
        }
    }

    return 0;
}

