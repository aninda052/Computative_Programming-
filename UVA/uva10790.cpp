#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,i=1;
    long long int x,x1,x2;
    while(true){
        cin>>a>>b;
        if(a==0 &&b==0)break;
        x1=(a*(a-1)/2);
        x2=(b*(b-1)/2);

        printf("Case %d: %lld\n",i,x1*x2);
        i++;
    }
    return 0;
}
