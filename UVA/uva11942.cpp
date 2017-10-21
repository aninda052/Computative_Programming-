#include<iostream>
using namespace std;
int main (){
int a,s,d,f,h;
cin>>a;
for(s=0;s<a;s++)
{
    int p=0,q=0;
    for(d=0;d<10;d++)
    {
        cin>>f;
        if(d==0){h=f;}
        else
            {
            if(f>h){p=1;h=f;}
            else if(f<h){q=1;h=f;}
            }
    }
 if(s==0)  {
      cout<<"Lumberjacks:"<<endl;
   }

    if(p==q){cout<<"Unordered"<<endl;}
    else{cout<<"Ordered"<<endl;}
}
return 0;}
