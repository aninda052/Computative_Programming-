#include<bits/stdc++.h>
using namespace std;
int arr[3652];
int muri(int vel1,int N1){
       int tmp=vel1;
       while(vel1<=N1){
                arr[vel1]=1;
                vel1+=tmp;
        }
}
int main (){
    int a,N,cnt;
    cin>>a;
    for(int k=0;k<a;k++){
        int p;
        cnt=0;
        cin>>N;
        cin>>p;
        for(int j=1;j<=N;j++){
            arr[j]=0;
        }
        for(int j=0;j<p;j++){
            int vel;
            cin>>vel;
            muri(vel,N);

        }
        for(int i=1;i<=N;i++){
                if(arr[i]==1 && (i+1)%7!=0 && i%7!=0){cnt++;}
            }

        cout<<cnt<<endl;

    }
    return 0;
}
