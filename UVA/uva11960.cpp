#include<iostream>

using namespace std;
int main (){
int a,s,d,i,j,k;
cin>>a;
for(i=0;i<a;i++)
{
    cin>>s;
    if(s==1){cout<<"1"<<endl;}
  else {

    int l,X,Y=0,q=0,Z=0;
    for(k=(s*70)/100;k<=s;k++){
    l=k;
    int z=0,x=0,c=0,v=0,t=0;
    for(j=2;j<=7;j++)
    {
        while(l%j==0)
        {
            l=l/j;
            if(j==2){z++;}
            else if(j==3){x++;}
            else if(j==5){c++;}

            else{v++;}
        }
    }
    if(l>7){t++;}
    X=(z+1)*(x+1)*(c+1)*(v+1)*(t+1);
    Y=max(Y,X);
    if(X==Y){q=max(q,k);}
    }
    cout<<q<<endl;}

}
return 0;}
