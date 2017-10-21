#include<bits/stdc++.h>
using namespace std;
int main (){
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    string st;
    int y,x;
   // cin.ignore();
    while(getline(cin,st)){
        y=0;
        int len=st.length();
        for(int i=0;i<len;i++){
//cout<<"i= "<<i<<"st= "<<st[i]<<endl;
            if(st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'||st[i]=='H'||st[i]=='W'||st[i]=='Y'){y=0;continue;}
            else if(st[i]=='B'||st[i]=='F'||st[i]=='P'||st[i]=='V')x=1;
            else if(st[i]=='C'||st[i]=='G'||st[i]=='J'||st[i]=='K'||st[i]=='Q'||st[i]=='S'||st[i]=='X'||st[i]=='Z')x=2;
            else if(st[i]=='D'||st[i]=='T')x=3;
            else if(st[i]=='L')x=4;
            else if(st[i]=='M'||st[i]=='N')x=5;
            else if(st[i]=='R')x=6;
            //cout<<y<<endl;
            if(st[i]==st[i+1]|| y==x){continue;}
            else{
                    cout<<x;
                    y=x;
            }
        }
        cout<<endl;
    }
    return 0;
}

