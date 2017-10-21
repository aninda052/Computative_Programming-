#include<iostream>
using namespace std;
int main()
{
   int q,w,result=1;
   cin>>w;
    for(q=1;q<=w;q++)
    {
      result=result*q;
    }
    cout<<result<<endl;
    return 0;
}
