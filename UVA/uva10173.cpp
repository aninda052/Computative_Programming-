#include<bits/stdc++.h>
using namespace std;
int main (){

int a;double x[1000];
while(cin>>a&&a!=0)
{
    double y=0,d=0,f=0;
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
        y+=x[i];
       // cout<<y<<endl;
    }
    double s=y/a;
    cout<<s<<endl;
    for(int j=0;j<a;j++)
    {
        if(x[j]<s){
        d+=x[j];
        f++;
        cout<<d<<endl;
        }
    }
    printf("$%.2lf\n",(f*s)-d);
}
return 0;
}
