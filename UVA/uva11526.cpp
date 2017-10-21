#include<bits/stdc++.h>
using namespace std;
int main (){
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
int x;
cin>>x;
while(x--){
long long int H,n,a,s,d=0,i=0;
long long  int res = 0,nw=0,old=0,tmp=0;
cin>>n;
if(n<1)cout<<"0"<<endl;
else if(n==1)cout<<"1"<<endl;
else if(n==3)cout<<"5"<<endl;
else {
for( i = 2; i <=sqrt(n); i++ ){

        nw=n/i;
        if(old!=0)tmp+=((old-nw-1)*(i-1));
        old=n/i;
        s=n/i;
        if(s==i){s=0;}
        res = (res + s+i);
}
if(i*i==n+1)d=i-1;
cout<<res+n+(n-(n/2))+tmp+d<<endl;}

}
return 0;}
