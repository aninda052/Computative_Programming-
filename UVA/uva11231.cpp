#include<iostream>
using namespace std;
int main (){
int n,m,c,R,Rl,RR,C,Cd,Cu;
while(1)
{
    cin>>n>>m>>c;
    if(n==0&&m==0&&c==0)break;
        R=((n-8)/2)+1;
        C=m-7;
        if(n%2!=0){cout<<R*C<<endl;}
      else
        {
          if(m%2!=0)
          {
             cout<<((C/2)*R)+((R-1)*(C/2))<<endl;
          }
          else
          {
              if(c==0)cout<<(((C/2)+1)*R)+((R-1)*(C/2))-1<<endl;
           else cout<<(((C/2)+1)*R)+((R-1)*(C/2))<<endl;
          }
        }

}
return 0;}
