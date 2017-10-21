//HOY NAI, BECAUSE OF LIMIT -_-
#include<bits/stdc++.h>
using namespace std;
int main (){
long long int i,M;double m;
while(cin>>i)
{
    m=pow(1.61803398879,i+2)/2.236056;
    M=m;
    if(m-M>.5)M=M+1;
    cout<<M<<endl;
}

return 0;}
