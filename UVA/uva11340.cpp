#include<bits/stdc++.h>
using namespace std;

int main (){
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    string st;
    double z[130];
    int d;
    long long int cent;
    char c;
    cin>>d;
    while(d--){
       for(int j=0;j<=130;j++){
            z[j]=0;
        }
        int a,j;
        j=0;
        cin>>a;
        int tmp=a;
        while(a--){
            cin>>c;
            int y=c;
            cin>>z[y];
        }
        cent=0;
        j=0;
        int q,t;
        cin>>q;
        cin.ignore();
        while(q--){
            getline(cin,st);
            int len=st.length();
            for(int i=0;i<len;i++){
                t=st[i];
                cent+=z[t];
            }
        }
       printf("%.2lf$\n",cent/100.0);
    }
    return 0;
}
