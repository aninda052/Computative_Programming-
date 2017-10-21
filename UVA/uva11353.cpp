#include<bits/stdc++.h>
#define mx 2000001
using namespace std;
bool arr[mx];
vector<int>prime;
pair<int,int>nonprime[mx];
int pos;
void sieve(){
    //for prime
    int x=sqrt(mx);
    prime.push_back(1);
    prime.push_back(2);
    for(int i=4;i<=mx;i+=2){
        arr[i]=true;
    }
    for(int i=3;i<=x;i+=2){
        if(arr[i]==false){
            prime.push_back(i);
            for(int j=i*i;j<=mx;j+=i){
                arr[j]=true;
            }
        }
    }

    for(int i=x+1;i<=mx;i+=2){
        if(arr[i]==false)prime.push_back(i);
    }

    //for non prime
    int cnt,n,pos=0;
    for(int i=4;i<=2000000;i++){
        if(arr[i]==true){
            cnt=0,n=i;
            int x=sqrt(i);
            for(int j=1;j<prime.size()&&prime[j]<=x;j++){
                if(i%prime[j]==0){

                    while(n%prime[j]==0){
                        n/=prime[j];
                        cnt++;
                    }
                    x=sqrt(n);
                }
            }
            if(n>1)cnt++;
            nonprime[pos]=make_pair(cnt,i);
            pos++;
        }
    }
    sort(nonprime,nonprime+pos);
}
main(){
    //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    sieve();
    int n,cse=1;
    while(scanf("%d",&n)){
            if(n==0)break;
        if(n<=148934)printf("Case %d: %d\n",cse,prime[n-1]);
        else printf("Case %d: %d\n",cse,nonprime[n-148935].second);
        cse++;
    }
return 0;}
