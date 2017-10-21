
#include<bits/stdc++.h>
using namespace std;
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int r,c;

    while(cin>>r>>c){
        if(r==0 && c==0)break;
        if(r==0 || c==0)cout<<"0 knights may be placed on a "<<r<<" row "<<c<<" column board."<<endl;
        else if(r==1 || c==1)cout<<max(r,c)<<" knights may be placed on a "<<r<<" row "<<c<<" column board."<<endl;
        else if(r==2 || c==2){
                int x=r,y=c;
            if(r!=2)swap(r,c);
            if(c%4==0)cout<<c<<" knights may be placed on a "<<x<<" row "<<y<<" column board."<<endl;
            else if(c%2!=0)cout<<c+1<<" knights may be placed on a "<<x<<" row "<<y<<" column board."<<endl;
            else cout<<r+c<<" knights may be placed on a "<<x<<" row "<<y<<" column board."<<endl;
        }
        else{
            int y=r*c;
            if(y%2!=0)y=y/2+1;
            else y=y/2;
            cout<<y<<" knights may be placed on a "<<r<<" row "<<c<<" column board."<<endl;
        }

    }

return 0;
}
