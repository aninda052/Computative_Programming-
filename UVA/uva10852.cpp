#include<bits/stdc++.h>
using namespace std;
int flag[1000000];
int sieve(){
    int i,j;
    //flag[2]=1;
     for(i=4;i<=10000;i+=2){

        flag[i]==1;
    }
    for(i=3;i<=10000;i+=2){
        if(flag[i]==0){
            for(j=i*2;j<=10000;j+=i){
                flag[j]=1;}
               // count++;
        }
    }
}
int main (){
sieve();
int a,s,i;
cin>>a;
while(a--){
    cin>>s;
    //if(s%2==0){s}
    for(i=(s/2)+1;i<=10000;i++){
        if(flag[i]==0){cout<<i<<endl;break;}
    }
    //cout<<"fsdhf"<<endl;
}
return 0;}
