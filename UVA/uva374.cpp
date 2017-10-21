#include<bits/stdc++.h>
using namespace std;
long long int bigmod(int b,int p,int m){

    if(p==0)return 1;
    if(p%2==0){
        long long int tmp=bigmod(b,p/2,m);
        return ((tmp%m)*(tmp%m))%m;
    }
    else{
        return ((b%m)*bigmod(b,p-1,m)%m)%m;
    }
}
 main(){
 int B,P,N;
 while(scanf("%d %d %d",&B,&P,&N)!=EOF){
        printf("%lld\n",bigmod(B,P,N));
 }
 return 0;}
