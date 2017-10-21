#include<bits/stdc++.h>
using namespace std;
int main (){
int a;
while(cin>>a &&a>=0)
{
    double m,f;long long int M,F;
    m=(pow(1.61803398879,a+2)/2.23606798)-1;
    M=m;
    if(m-M>.5)M=M+1;
    f=(pow(1.61803398879,a+1)/2.23606798);
    F=f;
    if(f-F>.5)F=F+1;

    cout<<M<<" "<<M+F<<endl;
}
return 0;}
