#include<bits/stdc++.h>

using namespace std;

main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
    int t,n,c;
    scanf("%d",&t);

    for(int Case=1;Case<=t;Case++){
        scanf("%d %d",&n,&c);
        if(n==0 || n>=c)printf("Case %d: 0\n",Case);
       // else if(n>c)printf("Case %d: 1\n",Case);
        else {
            float tmp =c/(n*2.0);
            int result=tmp;
            //cout<<tmp<<" "<<result<<" "<<tmp-result<<endl;
            if(tmp-result>.5)result++;
            printf("Case %d: %d\n",Case,result);
        }

    }

    return 0;
}
