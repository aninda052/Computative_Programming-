#include<iostream>
using namespace std;
int main (){
int n;
while(1){
cin>>n;
if(n==0){break;}
else if(n>=101){cout<<"f91("<<n<<") = "<<n-10<<endl;}
else {cout<<"f91("<<n<<") = 91"<<endl;}
}
return 0;}
