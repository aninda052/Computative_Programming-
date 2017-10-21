#include<iostream>
using namespace std;
int main (){

int x,e,c,n;

   while (cin>>n>>c){
    e=n;
    while(n>=c)
    {
        x=n/c;
        n=(n/c)+(n%c);
        e=e+x;
    }
    cout<<e<<endl;
}

return 0;}
