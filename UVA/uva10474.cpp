#include<bits/stdc++.h>

using namespace std;

int arr[1000000];
int BS( int N,int size)
{
    int l,h;
        l=1;h=size;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(N==arr[mid]){while(arr[mid]==arr[mid-1]){mid=mid-1;}return mid;}
        else if(arr[mid]<N)l=mid+1;
        else h=mid-1;
    }
    return -1;

}


int main (){
//freopen("in.txt","rt",stdin);
//freopen("out.txt","w",stdout);

int n,q,value,res,count=1;
while(cin>>n>>q)
{
    if(n==0 && q==0) break;
 for(int i=1;i<=n;i++)
 {
     cin>>arr[i];
 }
 sort(arr+1,arr+n+1);
 for(int i=1;i<=q;i++)
 {
     cin>>value;
     if(i==1)cout<<"CASE# "<<count<<":"<<endl;
     if(value==0)cout<<value<<" found at "<<"1"<<endl;
     else{res =BS(value, n);
     if(res==-1)cout<<value<<" not found"<<endl;
     else cout<<value<<" found at "<<res<<endl;}
 }

count++;
}

return 0;}

