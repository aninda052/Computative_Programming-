#include<bits/stdc++.h>
int arr[10000];
int finl[10000];
using namespace std;
int shive (){
    int a,s,x=2;
    finl[1]=2;
    for(int i=4;i<=10000;i+=2){
        arr[i]=1;
    }

    for(int i=3;i<=10000;i+=2){
        if(arr[i]==0){
          finl[x]=i;
          for(int j=i*i;j<=10000;j=j+i){
            arr[j]=1;
          }
          x++;
        }
    }
}
int main (){
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int n;
    shive();
    while(true){
        cin>>n;
        if(n==0)break;
        int cnt=0,cnt1;
        if(arr[n]==0&&n!=2)cnt=1;
        for(int i=1;i<=5000;i++){
            cnt1=0;
            for(int j=i;j<=5000;j++){
                cnt1+=finl[j];
               // cout<<finl[j]<<endl;
                if(cnt1==n)cnt++;

                if(finl[j]>=n/2)break;
            }
            if(finl[i]>=n/2)break;

        }
        if(n==5)cnt++;
        printf("%d\n",cnt);

    }

return 0;
}

