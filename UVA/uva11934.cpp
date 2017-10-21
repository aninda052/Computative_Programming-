#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,l,i,x,cnt;
    while(true){
        cin>>a>>b>>c>>d>>l;
        if(a==0 && b==0 && c==0 && d==0 && l==0)break;
        cnt=0;
        for(i=0;i<=l;i++){
            x=a*(i*i)+b*i+c;
            if(x%d==0)cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
