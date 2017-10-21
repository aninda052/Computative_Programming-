#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;
int main (){
double a,x;//int z=1;
while(cin>>a)//z++
{
    //cin>>a;
    //if(a<0){break;}
    int s;
    x=log2(a);
    s=x;
   // if(x-s==0){printf("Case %d: %d\n",z-1,s) ;}
   // else{printf("Case %d: %d\n",z-1,s+1) ;}
   cout<<s+1<<endl;
}
return 0;}
