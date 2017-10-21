#include<bits/stdc++.h>
#define y 9999999
char tmp[2];
using namespace std;
main (){
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int l,i,j,cnt,res,flg;
    string x;
    char c;
    while(true){
        cin>>l;
        if(l==0)break;
        cin.ignore();
        getline(cin,x);
        cnt=1;
        res=y;
        j=0;
        flg=0;
        c='m';
        for(i=0;i<l;i++){
            if(x[i]=='Z'){res=0;break;}
            if((x[i]=='R' ||x[i]=='D') && flg==0){cnt=1;c=x[i];flg=1;continue;}
            if(x[i]==c){
                cnt=1;
            }
            if(x[i]!=c && x[i]!='.'){
                c=x[i];
                if(res>cnt){res=cnt;}
                cnt=1;
            }
            if(x[i]=='.')cnt++;
            //cout<<x[i]<<"-"<<cnt<<endl;
        }
        cout<<res<<endl;
    }
return 0;}
