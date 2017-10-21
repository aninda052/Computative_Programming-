#include<iostream>
using namespace std;
int main (){

int x,sum,a,s,e,f,c,n;
cin >>a;
for(s=0;s<a;s++)
{
    cin>>e>>f>>c;
    n=e+f;
    sum=0;
    while(n>=c)
    {
        x=n/c;
        n=(n/c)+(n%c);
        sum=sum+x;
    }
    cout<<sum<<endl;
}

return 0;}
