#include<bits/stdc++.h>
using namespace std;
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,r,c;
    char x;
    cin>>t;
    while(t--){
        cin>>x>>r>>c;
        if(x=='Q'||x=='r'){
            cout<<min(r,c)<<endl;
        }
        else if(x=='k'){
                int y=(r*c);
                if(y%2!=0)y++;
                cout<<y/2<<endl;
        }
        else {
            if(r%2!=0)r=r/2+1;
            else r=r/2;
            if(c%2!=0)c=c/2+1;
            else c=c/2;
            cout<<c*r<<endl;
        }
    }
return 0;
}
