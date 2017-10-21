#include<bits/stdc++.h>
#define mx 1001
using namespace std;
bool arr[mx];
int res[mx];
void sieve(){
    int x=sqrt(mx);
    arr[0]=true;
    arr[1]=true;
    for(int i=3;i<=x;i+=2){
        if(arr[i]==false){
            for(int j=i*i;j<=mx;j+=i){
                arr[j]=true;
            }
        }
    }

    for(int i=4;i<=mx;i+=2){
        arr[i]=true;
    }



    for(int i=4;i<=1000;i++){
        int x=sqrt(i),val=0;
        for(int j=2;j<=x;j++){
            if(i%j==0){
                if(i/j==j)val+=j;
                else val+=i/j+j;
            }
        }
        val+=i+1;
        if(val<1001)res[val]=i;
    }
}
main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test,cse=1;
    sieve();
    while(true){
        scanf("%d",&test);
        if(test==0)break;
        int x=sqrt(test);
        if(test==1)printf("Case %d: 1\n",cse);
        else if(arr[test-1]==false )printf("Case %d: %d\n",cse,test-1);
        else if(res[test]==0)printf("Case %d: -1\n",cse);
        else printf("Case %d: %d\n",cse,res[test]);
        cse++;
    }
return 0;}
