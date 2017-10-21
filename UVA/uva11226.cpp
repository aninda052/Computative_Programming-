#include<bits/stdc++.h>
#define mx 500001
using namespace std;
bool arr[mx];
vector<int>prime;
vector<int>res;
int cnt;
void sieve(){
    int x=sqrt(mx);
    arr[0]=true;
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

    res.push_back(0);
    res.push_back(1);
    int sum,n,pos=0;
    for(int i=2;i<=500000;i++){
        n,sum,cnt=1;
        if(arr[i]==false){
            res.push_back(1);
        }

        else{
            sum=i;
            while(arr[sum]!=false){
                int x=sqrt(sum);
                n=sum;
                sum=0;
                for(int j=1;j<prime.size()&&prime[j]<=x;j++){
                    if(n%prime[j]==0){
                        while(n%prime[j]==0){
                        n/=prime[j];
                        sum+=prime[j];
                        }
                        x=sqrt(n);
                    }
                }
                if(n>1)sum+=n;
                cnt++;
                if(i==sum)break;
            }
            res.push_back(cnt);
        }

    }
    res[4]=1;
}
main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    sieve();
    int t,n,m;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&n,&m);
        int rs=0;
        if(n>m)swap(n,m);
        for(int j=n;j<=m;j++){
            rs=max(rs,res[j]);

        }
        printf("Case #%d:\n%d\n",i,rs);
    }

return 0;}
