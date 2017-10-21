#include<bits/stdc++.h>
using namespace std;
int main (){
   // freopen("in.txt","r",stdin);
  //  freopen("out.txt","w",stdout);

int q;double x[1000],w,a;
while(cin>>a&&a!=0)
{
    double y=0,d=0,f=0,N=0;
    for(int i=0;i<a;i++)
    {
        cin>>w;
        x[i]=w*100.0;
        y+=x[i];

    }
    double s=y/a;
   // cout<<s<<endl;
   // q=s*100.0;
   // s=q/100.0;
    for(int j=0;j<a;j++)
    {
        if(x[j]<s){
        d+=(long)(s-x[j]);
        }
        else N+=(long)(x[j]-s);
    }
  //  cout<<N<<"   "<<d<<endl;
    if(N>d)d=N;
    printf("$%.2lf\n",d/100.0);
}
return 0;
}
