#include<bits/stdc++.h>

using namespace std;
int main(){
// freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
int a,arr1[1000],arr[10100],i;
while(cin>>a){
        int j,q=0,flag=0;
        for(i=0;i<a;i++){
            cin>>arr[i];
        }
         for(i=0;i<a-1;i++){
            arr1[i]=abs(arr[i+1]-arr[i]);

        }

        sort(arr1,arr1+i);
        for(int j=0;j<a-1;j++){
            if(j!=arr1[j]-1){flag=1;break;}

        }
        if(flag==1)cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;//}

}

return 0;}

