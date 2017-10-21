#include<bits/stdc++.h>
using namespace std;
int main(){
int prime[1001]={0};
int n,m;
while(cin>>n>>m){
        int i=0;
for(int i=2;i<=n;i++)
{
    for(int j=i*i;j<=n;j+=i)
    {
        prime[j]=1;
    }
}
int y=1,u[n],q;
for(int i=1;i<=n;i++)
{
    if(prime[i]==0){u[y]=i;y++ ;}

}
y=y-1;

printf("%d %d: ",n,m);
if((m*2)-1>=y){for(i=1;i<=y;i++ )
   {cout<<u[i];
if(i!=y)cout<<" ";} }
else if(y%2==0){q=(y/2);for(i=q-(m-1);i<=q+m;i++ ){cout<<u[i];if(i!=q+m)cout<<" ";}}
else {int q=((y/2)+1);for(i=q-(m-1);i<=q+(m-1);i++ ){cout<<u[i];if(i!=q+(m-1))cout<<" ";}}
cout<<endl<<endl;
}
return 0;}

