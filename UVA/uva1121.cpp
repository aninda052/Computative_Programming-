#include<bits/stdc++.h>
#define mx 100001
using namespace std;
int arr[mx],N,S,res,tmp;

int Search(int k){

    tmp=0;
    for(int i=1;i<=k;i++)tmp+=arr[i];
    if(tmp>=S){return k;}
    for(int i=2;i<=N-k+1;i++){
        tmp=(tmp-arr[i-1])+arr[i+k-1];
        if(tmp>=S){return k;}
    }
    return 0;
}

int something(int low,int high){
    int idx=(high+low)/2;
    int a=Search(idx);
    if(idx==low)return 0;
    if(a){res=a;something(low,idx); }
    else{
        something(idx,high);
    }

}

main(){
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    while(scanf("%d %d",&N,&S)!=EOF){
        int total=0;
        for(int i=1;i<=N;i++){
            scanf("%d",&arr[i]);
            total+=arr[i];
        }
        res=0;
        if(total<S)printf("0\n");
        else {something(0,N);
        if(res==0 && total>=S)res=N;
        printf("%d\n",res);}
    }

return 0;}
