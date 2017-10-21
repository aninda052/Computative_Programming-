#include<bits/stdc++.h>
using namespace std;
int x[1430];
int main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,i,flag;
    while(cin>>a &&a!=0){
        for(i=0;i<a;i++){
            cin>>x[i];
        }
        flag=0;
        sort(x,x+a);
        for(i=1;i<a;i++){
              //  cout<<x[i]<<endl;
            if(x[i]-x[i-1]>200){flag=1;break;}
            if(i==(a-1)){
                if((1422-x[i])*2>200)flag=1;
            }
        }
        if(flag==1)cout<<"IMPOSSIBLE"<<endl;
        else cout<<"POSSIBLE"<<endl;
    }
    return 0;
}
