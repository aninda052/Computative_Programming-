#include<bits/stdc++.h>
using namespace std;
int main (){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
    int m,d,n,x;
    string arr[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cin>>n;
    while(n--){
        cin>>m>>d;
        if(m%2==0 && m!=2){
            if(d>=m){
                x=(d-m)%7;
                cout<<arr[x]<<endl;
            }
            else {
                  x=(m-d)%7;
                   if(x!=0)x=7-x;
                cout<<arr[x]<<endl;
            }
        }
        else if(m==1){
            if(d>=10){
                x=(d-10)%7;
                cout<<arr[x]<<endl;
            }
            else {
                  x=(10-d)%7;
                   if(x!=0)x=7-x;
                cout<<arr[x]<<endl;
            }
        }
          else if(m==2){
            if(d>=21){
                x=(d-21)%7;
                cout<<arr[x]<<endl;
            }
            else {
                  x=(21-d)%7;
                   if(x!=0)x=7-x;
                cout<<arr[x]<<endl;
            }
        }
          else if(m==5){
            if(d>=9){
                x=(d-9)%7;
                cout<<arr[x]<<endl;
            }
            else {
                  x=(9-d)%7;
                   if(x!=0)x=7-x;
                cout<<arr[x]<<endl;
            }
        }
          else if(m==7){
            if(d>=11){
                x=(d-11)%7;
                cout<<arr[x]<<endl;
            }
            else {
                  x=(11-d)%7;
                   if(x!=0)x=7-x;
                cout<<arr[x]<<endl;
            }
        }
          else if(m==9){
            if(d>=5){
                x=(d-5)%7;
                cout<<arr[x]<<endl;
            }
            else {
                  x=(5-d)%7;
                   if(x!=0)x=7-x;
                cout<<arr[x]<<endl;
            }
        }
          else if(m==11){
            if(d>=7){
                x=(d-7)%7;
                cout<<arr[x]<<endl;
            }
            else {
                  x=(7-d)%7;
                   if(x!=0)x=7-x;
                cout<<arr[x]<<endl;
            }
        }
          else {
            if(d>=7){
                x=(d-7)%7;
                cout<<arr[x]<<endl;
            }
            else {
                  x=(7-d)%7;
                   if(x!=0)x=7-x;
                cout<<arr[x]<<endl;
            }
        }
    }
return 0;
}
