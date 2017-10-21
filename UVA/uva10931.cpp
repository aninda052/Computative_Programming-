#include<bits/stdc++.h>
using namespace std ;
int main (){

int a;
while(cin>>a && a!=0)
{
   int s[100000] ={0};
   int i=0,d=0;
   cout<<"The parity of ";
    while(a!=1)
    {
      s[i]=a%2;
      a=a/2;
      if(s[i]==1){d++;}
      i++;
    }
    s[i]=1;
    for(int j=i;j>=0;j--){
        cout<<s[j];
    }

    cout<<" is "<<d+1<<" (mod 2)."<<endl;;

}

return 0;}

