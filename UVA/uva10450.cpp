#include<bits/stdc++.h>
using namespace std;
long long int arr[55];
long long int muri(){
    long long int cnt=0;
    arr[2]=1;
    arr[3]=3;
    for(int j=4;j<51;j++){
       cnt+=arr[j-2];
        arr[j]=(pow(2,j-1)-1)+cnt;

 }
}
long long int pw(int x){
    long long int muri1=1;
    for(int w=1;w<=x;w++){
        muri1*=2;
    }
    return muri1;
}
int main (){
    int a,s;
    muri();
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>s;
        if(s==0)printf("Scenario #%d:\n0\n\n",i);
       else printf("Scenario #%d:\n%lld\n\n",i,pw(s)-arr[s]);
    }
    return 0;
}
