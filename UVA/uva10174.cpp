#include<bits/stdc++.h>
using namespace std;
main (){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
long long int N1,N2;
char st[60];
while(gets(st)){
    if(sscanf(st,"%lld %lld",&N1,&N2)==2){
        int res=0;
        for(int i=N1;i<=N2;i++ ){
            if(i%2==0 && i%4!=0)res++;
        }
        printf("%d\n",res);
    }
    else {
        sscanf(st,"%lld",&N1);
        if(N1==0)printf("2 2\n");
        else if(N1%2!=0){
            long long int a;
            if(N1<0)a=(N1-1)/2;
            else a=(N1+1)/2;
            if(N1<0){a*=-1;printf("%lld %lld\n",a-1,a);}
            else printf("%lld %lld\n",a,a-1);
        }
        else if(N1%4==0){
            long long int a=N1/4;
            if(N1<0){a*=-1;printf("%lld %lld\n",a-1,a+1);}
            else printf("%lld %lld\n",a+1,a-1);
        }
        else printf("Bachelor Number.\n");
    }



}
return 0;}
