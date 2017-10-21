#include<bits/stdc++.h>
#define lim 1000005
using namespace std;

main(){

//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
    long long int t,n,q,y,x,v,arr[lim];
    scanf("%lld",&t);
    for(int Case=1;Case<=t;Case++){
        scanf("%lld %lld",&n,&q);
        long long int sum=0,result=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            if(i)sum+=arr[i];

        }

        for(int i=0;i<n-1;i++){
            result+=((n-i-1)*arr[i])-sum;
            sum-=arr[i+1];

        }
        printf("Case %d:\n",Case);
        while(q--){
            scanf("%lld",&y);
            if(y){
                printf("%lld\n",result);
            }
            else{
                scanf("%lld %lld",&x,&v);
                long long int y=v;
                v-=arr[x];
                result+=((n-x-1)*v);
                v*=-1;
                result+=v*x;
                arr[x]=y;

            }
        }

    }


    return 0;

}
