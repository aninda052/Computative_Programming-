#include<bits/stdc++.h>
using namespace std;
int arr[25];
int res[25],tmpidx,tmp,m,n;
int tmpres[25];

int backtrack(int k,int idx,int Time){
    if(tmp<=Time){
        if(tmp<Time){
            tmp=Time;
            tmpidx=idx;
            copy(res,res+idx,tmpres);
        }
        else if(tmpidx<idx){
            tmpidx=idx;
            copy(res,res+idx,tmpres);
        }
    }
    for(int j=k;j<m;j++){
        if((Time+arr[j])<=n){
            res[idx]=arr[j];
            Time+=arr[j];
            backtrack(j+1,idx+1,Time);
            Time-=arr[j];
            res[idx]=NULL;
        }
    }

}


main(){
    //int n,m;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        for(int i=0;i<m;i++){
            scanf("%d",&arr[i]);
        }
        tmp=-1;
        backtrack(0,0,0);
        for(int k=0;k<tmpidx;k++)printf("%d ",tmpres[k]);
        printf("sum:%d\n",tmp);
    }
return 0;}
