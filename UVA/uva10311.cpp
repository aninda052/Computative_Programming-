#include<bits/stdc++.h>
bool arr[100000001];
using namespace std;

void shive (){
    int y=sqrt(100000000);
    arr[1]=true;
    for(int i=3;i<=y;i+=2){
        if(arr[i]==false){
          int i2=i+i;
          for(int j=i*i;j<=100000000;j+=i2){
                arr[j]=true;
          }

        }
    }
}
int main (){
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int n;
    shive();
  while(cin>>n){
        int m=n;
        int flg=0;
        if(n%2!=0){
            if(arr[n-2]==false && n!=1){printf("%d is the sum of 2 and %d.\n",n,n-2);}
            else {printf("%d is not the sum of two primes!\n",n);}
        }

        else{
            n=(n/2)-1;
            if(n%2==0)n=n-1;
            for(int i=n;i>=3;i-=2){
                    //h++;
                if(arr[i]==false){
                    int x=m-i;
                    if(arr[x]==false && x%2!=0){printf("%d is the sum of %d and %d.\n",m,i,x);flg=1;break;break;}
                }
            }
            if(flg==0){printf("%d is not the sum of two primes!\n",m);}
        }



    }

return 0;
}

