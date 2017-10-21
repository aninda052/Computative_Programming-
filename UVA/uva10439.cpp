#include<iostream>
using namespace std;
int main (){
int N,M,n,x;
while(1)
{
   cin>>N>>M;
   if(N==0 && M==0){break;}
   else if(N==0){cout<<N<<" "<<M<<" "<<"1"<<endl;}
   else if(N==1 && M==1){cout<<N<<" "<<M<<" "<<"Multiple"<<endl;}
   else if(N==1){cout<<N<<" "<<M<<" "<<"Impossible"<<endl;}
   else if(M%(N-1)==1 || N==2)
   {
       n=((M-N)/(N-1))+1;
       x=(N+1)+((n-1)*N);
       cout<<N<<" "<<M<<" "<<x<<endl;
   }
   else{cout<<N<<" "<<M<<" "<<"Impossible"<<endl;}
}

return 0;}
