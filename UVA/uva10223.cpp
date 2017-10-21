#include<bits/stdc++.h>
using namespace std;
long long int arr[25];
int fac(){
        int j=4;
        arr[1]=1;
        arr[2]=2;
        arr[3]=5;
        for(int x=4;x<22;x++){
            long long int cnt1 =1,cnt2=1;
            int v=x;int y;
            if(x%2!=0){v=v+1;y=x/2;}
            else {y=(x/2)-1;}
            for(int i=v+1;i<(2*x);i+=2){
                cnt1*=i;
            }
            for(int i=3;i<=(x/2);i++){
                cnt2*=i;
            }
            cnt1=cnt1*pow(2,y);
            arr[j]=cnt1/(cnt2*(x+1));

            j++;
        }
}

int main (){
    int n;
    fac();
    while(cin>>n){

        for(int k=1;k<22;k++){
            if(arr[k]==n)cout<<k<<endl;
        }
        //
    return 0;
}

