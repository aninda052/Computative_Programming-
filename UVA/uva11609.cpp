#include<bits/stdc++.h>
#define MD 1000000007
using namespace std;

unsigned long long int pow(int b)
{
    if(b == 0) return 1;
    else if(b % 2 == 0){return (pow(b/2) * pow(b/2)%MD);}
    else{return(2* pow(b/2)*pow(b/2)%MD);}
}
int main (){

    unsigned long long x,y,t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        x=pow(n-1);
        printf("Case #%d: %llu\n",i,(n*x)%MD);
    }

    return 0;
}
