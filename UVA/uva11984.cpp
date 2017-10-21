#include<bits/stdc++.h>
using namespace std;
int main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,c,d;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>c>>d;
        double tmp=(1.8*c)+32;
        //cout<<tmp;
        double res=((tmp+d)-32)*.55555555556;
        //cout<<res;
        printf("Case %d: %.2lf\n",i,res);
    }
return 0;}
