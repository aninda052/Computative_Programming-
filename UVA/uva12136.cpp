#include<bits/stdc++.h>
using namespace std;
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,h1,h2,m1,m2,H1,H2,M1,M2,i;
    cin>>n;
    for(i=1;i<=n;i++){
        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        scanf("%d:%d %d:%d",&H1,&M1,&H2,&M2);
        if(h2>H1 &&h1>=H2){
            if(h1==H2 && m1<=M2 )cout<<"Case "<<i<<": Mrs Meeting"<<endl;
            else cout<<"Case "<<i<<": Hits Meeting"<<endl;
        }
         else if(h1>H2 &&h2>=H1){
            if(h2==H1&&m2>=M1)cout<<"Case "<<i<<": Mrs Meeting"<<endl;
            else cout<<"Case "<<i<<": Hits Meeting"<<endl;
        }
        else if(h1<H2 &&h2<=H1){
            if(h2==H1&&m2>=M1)cout<<"Case "<<i<<": Mrs Meeting"<<endl;
            else cout<<"Case "<<i<<": Hits Meeting"<<endl;
        }
        else if(h2<H1 &&h1<=H2){
            if(h1==H2&&m2>=M1)cout<<"Case "<<i<<": Mrs Meeting"<<endl;
            else cout<<"Case "<<i<<": Hits Meeting"<<endl;
        }
        else cout<<"Case "<<i<<": Mrs Meeting"<<endl;
    }
return 0;}
