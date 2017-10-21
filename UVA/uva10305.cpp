#include<bits/stdc++.h>
using namespace std;
int arr[101][101],arr1[101];
int main (){
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int n,m,q,flg;
    while(cin>>n>>m){
        if(n==0 && m==0)break;
        int i,s,j;
        s=n;
        memset(arr,0,101);
        memset(arr1,0,101);
        for(i=0;i<=101;i++){
            arr1[i]=0;
            for(j=0;j<=101;j++){
                arr[i][j]=0;
            }
        }
        while(m--){
            flg=0;
            cin>>i>>j;
            if(arr[i][j]==1)flg=1;
            arr[i][j]=1;
            if(flg==0)arr1[j]+=1;
        }
        flg=0;
        while(s--){
            for(int x=1;x<=n;x++){
                if(arr1[x]==0){
                    int column;
                    for(column=1;column<=n;column++){
                        if(arr[x][column]>0){
                            arr1[column]-=1;

                        }
                    }
                    if(flg==1)cout<<" ";
                    cout<<x;
                    arr1[x]=-1;
                    flg=1;
                    break;
                }
            }

        }
        cout<<endl;
    }
    return 0;
}

