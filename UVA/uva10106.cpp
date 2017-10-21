#include<iostream>
using namespace std;
int x[500];
int main(){
int m,n,lenA,lenB,i,j,p=0,o=0,k=0,l,h=0,t,X,lenX,q;
string a,b;
cin>>a;
lenA=a.length();
cin>>b;
lenB=b.length();
for(i=lenB-1;i>=0;i--)
{
    l=0;o=0;h=0;
    for(j=lenA-1;j>=0;j--)
    {
      //  cout<<x[k+l]<<endl;
        p=((a[j]-48)*(b[i]-48))+o;
        m=x[k+l];
        x[k+l]=((p%10)+x[k+l]+h)%10;
        if(k!=0) {h=((p%10)+m)/10;}
        o=p/10;
       if(j==0&&(h+o)!=0){x[k+l+1]=h+o;}
     //  cout<<j<<" "<<k+l<<"_"<<o<<"_"<<p<<"_"<<x[k+l]<<h<<endl;
       l++;
    }
    k++;
}
if(x[(k+l-1)==0]){q=1;}
else{q=0;}
for(X=k+l-1;X>=q;X--)
{
    if(x[(k+l-1)]==0){cout<<x[X-1];}
    else{cout<<x[X];}
    if(X ==0){cout<<endl;}
}
//cout<<x[k+l-1]<<endl;
return 0;}

