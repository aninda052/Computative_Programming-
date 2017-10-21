#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long int bigmod(int b,int p){
    if(!p)return 1;
    if(p%2){
        long long int x=bigmod(b,p-1);
        return (x*b)%mod;
    }
    else{
        long long int x=(bigmod(b,p/2));
        return (x*x)%mod;

    }
}

main(){
    int t,n,k;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++){
        scanf("%d %d",&n,&k);
        long long int result=0,tmp;
        for(int i=0;i<n;i++){
            tmp=__gcd(i,n);
            result+=bigmod(k,tmp);  //sumof(k^gcd(i,n))
            //cout<<i<<" "<<tmp<<" "<<result<<endl;
            result%=mod;
        }
        tmp=bigmod(n,mod-2);
        //cout<<tmp<<endl;
        printf("Case %d: %lld\n",cs,(result*tmp)%mod);


    }

    return 0;
}
