#include<bits/stdc++.h>
using namespace std;
int main (){
long long int a,b,i,j;
while(cin>>a>>b&&a!=0&&b!=0){
    long long int cnt=0,x1,result;
    x1=((a+b)-2)*(a*b);
    if(a>1&&b>1){
            for(i=a-1,j=b-1;i>=1;i--,j--){
                cnt+=i*j;
                if(j==1)break;
            }
    }
    cnt*=4;
    result=cnt+x1;
    cout<<result<<endl;
}
return 0;}
