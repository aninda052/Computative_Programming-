#include<bits/stdc++.h>
using namespace std;
int x,y,n;
int bigmod(int base,int power){

    if(power==0)return 1;
    if(power%2==0){
        long long int tmp=bigmod(base,power/2);
        return ((tmp%n)*(tmp%n))%n;
    }
    else{
        return ( (base%n)*(bigmod(base,power-1)%n))%n;
    }

}
main(){
    int c;
    while(scanf("%d",&c)&& c){
        while(c--){
            scanf("%d %d %d",&x,&y,&n);
            printf("%d\n",bigmod(x,y));
        }
    }
return 0;}
