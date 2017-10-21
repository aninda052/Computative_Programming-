#include<iostream>
#include<cmath>
using namespace std;
int main (){
 int a,s,d,f,g,h,i,x;
cin>>a;
while(a--)
{
    h=0;
    cin>>s>>d;
   if(s==d)cout<<'0'<<endl;
   else{
     f=abs(s-d);
    g=sqrt(f);
    x=f-g*g;
    i=(g*2)-1;
   if(g*g!=f) while(1)
    {
        h+=x/g;
        x=x%g;
        if(x==0)break;
        g--;


    }
    cout<<i+h<<endl;}

}
return 0;}
