#include<bits/stdc++.h>
using namespace std;
int fac(int x){
        int cnt =1;
        for(int i=1;i<=x;i++){
            cnt*=i;

        }
        return cnt;
}
long long int fac1(int y){
        long long int cnt1 =1;
        for(int i=y+1;i<=(2*y);i++){
            cnt1*=i;
        }
        return cnt1;
}

int main (){
    int n,t=0;
    while(cin>>n){
        if(t)cout<<endl;t=1;
        cout<<fac1(n)/(fac(n)*(n+1))<<endl;
        //
    }
    return 0;
}
