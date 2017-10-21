
#include<bits/stdc++.h>
int arr[1000000];
using namespace std;

int shive (){
    int a,s,x=2,y=sqrt(1000000);
    arr[1]=1;
    for(int i=3;i<=y;i+=2){
        if(arr[i]==0){
          for(int j=i*i;j<=1000000;j=j+i){
                arr[j]=1;
          }

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
        int flg=0;
        if(arr[n-2]==0 && (n-2)%2!=0){printf("%d:\n2+%d\n",n,n-2);flg=1;}
        else{
            for(int i=3;i<=n/2;i+=2){
                if(arr[i]==0){
                    int x=n-i;
                    if(arr[x]==0&& x%2!=0){printf("%d:\n%d+%d\n",n,i,x);flg=1;break;}
                }
            }
        }
        if(flg==0){printf("%d:\nNO WAY!\n",n);}


    }

return 0;
}

