#include<bits/stdc++.h>
using namespace std;
int main (){
long long int a,b,i,j,cnt;
while(cin>>b&&b>2){
    cnt=0;
    for(i=1;i<=b;i++){
        j=b-(i+i+1);
        if(j>0) cnt+=(j*(j+1))/2;
    }
    cout<<cnt<<endl;
}
return 0;}


