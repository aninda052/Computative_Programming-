#include<bits/stdc++.h>
using namespace std;

main(){
    int T,B,K,N,a,tmp;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&N,&B);
        tmp=0;
        int tmpB=B;
        while(tmpB--){
            scanf("%d",&K);
            int cnt=1;
            int tmpK=K;
            while(tmpK--){
                scanf("%d",&a);
                cnt=(cnt*a)%N;
            }
            tmp=(tmp+cnt)%N;
           // cout<<tmp<<endl;
        }
        //cout<<tmp%N<<endl;
        printf("%d\n",tmp);

    }
return 0;}
