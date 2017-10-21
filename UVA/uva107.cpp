#include<bits/stdc++.h>
using namespace std;
int main(){
long long int a,x,k,s,j,f,i,hight,warker,t;
double z;
while(cin>>a>>s)
{
    if(a==0&&s==0)break;
    if(a==1){cout<<"0 1"<<endl;}
    //else if(a==1 && s==0){cout<<"1 1"<<endl;}
    else if(s==1){
   double q=log(a)/log(2);long long int w=0,v;
                v=q;
            while(a>=1)
            {
                w+=a;
                a/=2;
            }
            cout<<v<<" "<<w<<endl;}

    else{
    hight=0;warker=0;
    for(i=0;i<=100;i++)
    {
       z=powl(s,1.0/i);
       x=z;
       t=powl(x+1,i);
       if(abs(z-x)<=.01&&t==a){break;}
    }
    f=i;
    for(j=0,k=i;j<=f,k>=0;j++,k--)
    {
         hight +=(powl(x+1,j)*powl(x,k));
         if(j!=f){warker +=powl(x,j);}
    }
    cout<<warker<<" "<<hight<<endl;}
}
return 0;}
