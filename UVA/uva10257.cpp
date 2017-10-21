#include<iostream>
using namespace std;
int main(){
    int s,p,y,j,sp,ye,pu,x;
    while(cin>>s>>p>>y>>j){
        sp=(s+y+j+12)/3;
        if((s+y+j+12)%3!=0)sp=sp+1;
        x=(s+y+j+12)%3;
        ye=sp-y;
        pu=sp-s;
        if(x==1&&s+p<=y){ye=ye-1;pu=pu-1;}
        else if (x==2&&s+p==y){ye=ye-1;}
        else if(s+p>y && x==2){ye=ye-1;pu=pu+1;}
        else if(s+p>y && x==1){sp=sp-1;ye=ye-1;}
        else if(s+p<y && x==2){pu=pu-1;}
        cout<<sp<<" "<<pu<<" "<<ye<<endl;
    }
    return 0;
}
