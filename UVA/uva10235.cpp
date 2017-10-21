#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int sieve(){
    int i,j;
    //flag[2]=1;
     for(i=4;i<=1000000;i+=2){

        arr[i]==1;
    }
    for(i=3;i<=1000000;i+=2){
        if(arr[i]==0){
                for(j=i*2;j<=1000000;j+=i){
                arr[j]=1;}
               // count++;
        }
    }
}
int main(){
  //  freopen("in.txt","r",stdin);
  //  freopen("out.txt","w",stdout);
    int a;
    sieve();
    while(cin>>a){
        if(a%2==0&&a!=2)cout<<a<<" is not prime."<<endl;
        else if(arr[a]==0){
                int cnt=0,x=0;
                stringstream convert;
                convert<<a;
                string st=convert.str();
                for(int i=st.length()-1;i>=0;i--){
                    cnt=(cnt*10)+(st[i]-48);
                }
                if(arr[cnt]==0&&a!=cnt)cout<<a<<" is emirp."<<endl;
                else cout<<a<<" is prime."<<endl;

        }
    else cout<<a<<" is not prime."<<endl;
    }

    return 0;
}
