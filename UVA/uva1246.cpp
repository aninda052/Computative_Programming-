#include<bits/stdc++.h>
#define mx 10001
using namespace std;
bool arr[mx];
vector<int>v;
void sieve(){
    int x=sqrt(mx);
    for(int i=3;i<=x;i+=2){
        if(arr[i]==false){
            for(int j=i*i;j<=mx;j+=i){
                arr[j]=true;
            }
        }
    }
    v.push_back(2);
    for(int i=3;i<=mx;i++){
        if(arr[i]==false && i%2!=0)v.push_back(i);
        else {
            int x=sqrt(i),cnt=0;
            for(int k=2;k<=x;k++){
                if(i%k==0 && k!=i/k)cnt+=2;
                if(i%k==0 && k==i/k)cnt++;
                //cout<<i<<"-"<<cnt<<endl;
            }
            if(arr[cnt+2]==false && (cnt+2)%2!=0)v.push_back(i);
        }
    }
}
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test,l,h;
    sieve();
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&l,&h);
        int flg=0;
        if(l==h){printf("-1\n");continue;}
        for(int i=0;i<v.size()&&v[i]<=h;i++){
                if(flg==1)printf(" ");
                if(v[i]>=l){printf("%d",v[i]);flg=1;}
        }
        printf("\n");
    }
return 0;}
