#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a,s,d[50],f=0,q=1;
while(q++)
{
    cin>>a;
    if(a==0){break;}
    f=0;
    for(s=0;s<a;s++)
    {
        cin>>d[s];
        f=f+d[s];
    }
    int z=f/a,x,count=0;
    for(x=0;x<a;x++)
    {
       if(z<d[x]){count=count+(d[x]-z);}
    }
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",q-1,count);
}
return 0;}
