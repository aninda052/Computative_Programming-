#include<bits/stdc++.h>
using namespace std;
int main(){
   // freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int h,m,t;
    cin>>t;
    while(t--){
        scanf("%d:%d",&h,&m);
        if(m==0 && h!=12)printf("%.2d:00\n",12-h);
        else if(h==12 && m!=0)printf("11:%.2d\n",60-m);
        else if(h==12 && m==0)printf("12:00\n");
        else if(h==11 && m!=0)printf("12:%.2d\n",60-m);
        else printf("%.2d:%.2d\n",11-h,60-m);

    }
    return 0;
}
