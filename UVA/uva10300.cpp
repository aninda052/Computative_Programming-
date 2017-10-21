#include<iostream>
using namespace std;
int main (){
double a,s,d,f,g,i,j,h;
while(cin>>a)
{
    for(j=0;j<a;j++){
    cin>>s;
    h=0;
    for(i=0;i<s;i++)
    {
        cin>>d>>f>>g;
        h=h+((d/f)*g)*f;
    }
    cout<<h<<endl;}
}
return 0;}
