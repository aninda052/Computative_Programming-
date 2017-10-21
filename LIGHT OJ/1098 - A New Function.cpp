#include<bits/stdc++.h>

using namespace std ;

main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
    int t,n;
    scanf( "%d",&t);
    for(int Case=1;Case<=t;Case++){
        scanf( "%d",&n);
        long long int result=0;
        long long int tmp=sqrt(n);
        //int x=n/tmp;
        for(long long int i=2;i<=tmp;i++){
            long long int tmp1=n/i;
            result+=(tmp1*(tmp1+1)/2)-1;
            result+=(tmp1-tmp)*i;
        }
        printf("Case %d: %lld\n",Case,result);

    }

    return 0;
}
