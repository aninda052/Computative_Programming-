#include<bits/stdc++.h>
using namespace std;
int flag[2000];
int sieve(){
    int i,j;
    for(i=3;i<=2000;i+=2){
        if(flag[i]==0){
            for(j=i*i;j<=2000;j+=i){
                flag[j]=1;
            }

        }
    }
}
int main (){
    sieve();
string x;
while(getline(cin,x)){
    int cnt=0,tmp=0;
    for(int i=0;i<x.length();i++){
        if(x[i]>96)tmp=x[i]-96;
        else tmp=x[i]-38;
        cnt+=tmp;
    }
    if(cnt%2==0&&cnt!=2)cout<<"It is not a prime word."<<endl;
    else if(flag[cnt]==0)cout<<"It is a prime word."<<endl;
    else cout<<"It is not a prime word."<<endl;
}


return 0;
}
