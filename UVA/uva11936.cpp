#include<iostream>
using namespace std;
int main(){

int a ,s,d,f,g;
cin>>a;
for(s=0;s<a;s++)
{
    cin>>d>>f>>g;
    if(d+f<=g || f+g<=d || g+d<=f){cout<<"Wrong!!"<<endl;}
    else{cout<<"OK"<<endl;}
}
return 0;}
