#include<bits/stdc++.h>
using namespace std;
int main (){
long long int a,b,i,j,cnt;
cin>>a;
while(a--){
    cin>>b;
    cnt=0;
    //if(b%2==0){b=(b/2)-1;}
   // else b=b/2;
    for(i=1;i<=b;i++){
        j=b-(i+i+1);
        if(j>0) cnt+=(j*(j+1))/2;


    }
    cout<<cnt<<endl;
}
return 0;}

