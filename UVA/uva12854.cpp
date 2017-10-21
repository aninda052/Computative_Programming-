#include<iostream>
using namespace std;
int main (){
int a1,a2,s1,s2,d1,d2,c1,c2,f1,f2,x;
while(cin>>a1>>s1>>d1>>c1>>f1>>a2>>s2>>d2>>c2>>f2)
{
    x=0;
    if((a1==0 && a2== 1)||(a1==1 && a2== 0)){x++;}
    if((s1==0 && s2== 1)||(s1==1 && s2== 0)){x++;}
    if((d1==0 && d2== 1)||(d1==1 && d2== 0)){x++;}
    if((c1==0 && c2== 1)||(c1==1 && c2== 0)){x++;}
    if((f1==0 && f2== 1)||(f1==1 && f2== 0)){x++;}
    if(x==5)cout<<"Y"<<endl;
    else cout<<"N"<<endl;
    cout<<x<<endl;
}
return 0;}
