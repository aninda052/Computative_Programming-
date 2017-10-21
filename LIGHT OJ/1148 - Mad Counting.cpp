#include<bits/stdc++.h>

using namespace std;

main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
    int t,n;
    long long int result,arr[55];
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        scanf("%d",&n);
        result=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=-1){
                int tmp=0;
                for(int j=i+1;j<n;j++){
                    if(tmp==arr[i])break;
                    if(arr[i]==arr[j]){
                        arr[j]=-1;
                        tmp++;
                    }
                }
                result+=arr[i]+1;
            }
        }
        printf("Case %d: %lld\n",Case,result);

    }

    return 0;
}
