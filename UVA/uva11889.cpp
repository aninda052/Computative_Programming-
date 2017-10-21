#include<bits/stdc++.h>
#define mx 100000000
using namespace std;
bool flag[mx];
vector<int>prime;
vector<int>v;
map<int,int>ma;
map<int,int>mc;
int sieve(){
    int i;
    long long int j;
    prime.push_back(2);
    for(i=3;i<=10000000;i+=2){
        if(flag[i]==false){
            prime.push_back(i);
            for(j=i*i && j<=10000000;j<=10000000;j+=i){
                flag[j]=true;}
        }
    }


}


map<int,int> primefact(int n,bool y){
    map<int,int>mp;
    int x=sqrt(n);
    for(int i=0;i<n&&prime[i]<=x;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n=n/prime[i];
                mp[prime[i] ]++;
            }
            x=sqrt(n);
        }
        if(y==true)v.push_back(prime[i]);
    }
    if(n>1){
        mp[n]++;
        if(y==true)v.push_back(n);
    }
    return mp;

}

int pw(int base,int power){
    int reslt=base;
    if(power==1)return reslt;
    for(int i=1;i<power;i++)
        reslt*=base;

return reslt;

}
main(){
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    sieve();
    int t,a,c;
    scanf("%d",&t);
    while(t--){
        int res=1;
        scanf("%d %d",&a,&c);
        if(c%a!=0){
            printf("NO SOLUTION\n");
            continue;
        }
        ma=primefact(a,false);
        mc=primefact(c,true);
        for(int i=0;i<v.size();i++){
            if(mc[v[i]]>ma[v[i]])res*=pw(v[i],mc[v[i]]);
        }
        printf("%d\n",res);
        v.clear();

    }

return 0;}
