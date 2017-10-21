#include<bits/stdc++.h>
int arr[100000];
using namespace std;
int main (){
   // freeopen("in.txt","r",stdin);
   // freeopen("out.txt","w",stdout);
int a,b,k,p;
cin>>p;
while(p--){
cin>>a>>b>>k;
long long int q=0,y,delta=0,sigma=0;
int x=k-(a%k);
if(x==k)x=0;
for(int i=a+x;i<=b;i+=k)
{
    arr[q]=i;
    q++;
}
for(int i=0;i<q;i++)
{
    //cout<<arr[i]<<endl;
    x=sqrt(arr[i]);
    for(int j=1;j<=x;j++)
    {
        if(arr[i]%j==0)
        {
            //cout<<"D= "<<arr[i]<<" div= "<<j<<endl;
            y=arr[i]/j;
            if(j!=y){delta+=2;}
            else{delta+=1;y=0;}
            sigma+=y+j;
           // cout<<"D= "<<arr[i]<<"sigma= "<<sigma<<"j= "<<j<<" y= "<<y<<endl;
        }
    }
   // delta+=2;
    //sigma+=1+arr[i];
}
cout<<delta<<" "<<sigma<<endl;
}
return 0;}
