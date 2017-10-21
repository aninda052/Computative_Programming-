#include<bits/stdc++.h>
using namespace std;



int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        scanf("%d %d",&n,&k);
        long long int result=0;
        for(int i=1;i<=n;i++){
            result+=k;
            result %=i;
        }
        printf("Case %d: %lld\n",Case,result+1);

    }


return 0;}

