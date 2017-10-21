#include<bits/stdc++.h>
using namespace std;
int main (){
    string st;
    int d;
    //cin>>d;
    while(true){
        cin>>d;
        if(d==0)break;
        cin.ignore();
        getline(cin,st);
        int len=st.length();
        //cout<<len<<endl;
        int x=len/d;
        int tmp=x;
        int y=0;
        while(x<=len){
            for(int i=x-1;i>=y;i--){
                cout<<st[i];
            }
            y=x;
            x+=tmp;
        }
        cout<<endl;
    }
    return 0;
}
