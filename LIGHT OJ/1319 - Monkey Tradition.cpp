#include<bits/stdc++.h>

using namespace std;

int  exgcd(long long int a,long long int b,long long int *x,long long int *y){

    if(!b){
        *x=1,*y=0;
        return 0;
    }
    long long int x1,y1;
   // printf("%d - %d\n",a,b);
    exgcd(b,a%b,&x1,&y1);
    *x=y1;
    *y=x1-((a/b)*y1);
    //printf("%d - %d - %d -%d\n",a,b,*x,*y);
    return 0;
}

main(){
//freopen("in.txt","r",stdin);
    int t,n,r,p;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        scanf("%d",&n);
        vector< pair<int,int> >v;
        long long int prod=1;
        for(int i=0;i<n;i++){
            scanf("%d %d",&p,&r);
            prod*=p;
            v.push_back(make_pair(p,r));

        }
        long long int result=0;
        for(int i=0;i<n;i++){
            long long int pi=v[i].first,ri=v[i].second;
            long long int prodp=prod/pi,x,y;
            exgcd(prodp,pi,&x,&y);
            //cout<<prod<<" "<<pi<<endl;
            long long int inv =x;
            if(inv<0)inv+=pi;
            result+=(prodp*ri*inv);
        }

        printf("Case %d: %lld\n",Case,result%prod);

    }


    return 0;
}
