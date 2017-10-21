#include<bits/stdc++.h>
#define valid(X,Y) X>=0 && Y>=0 && X<m && Y<n
using namespace std;
int fx[]={0,-1,1};
int fy[]={-1,0,0};
string direction[]={"forth","left","right"};
char trac[]={'I','E','H','O','V','A','#'};
string reslt[10],st[10];
int X,Y,flg,n,m,t;

void print(){
    cout<<reslt[0];
    for(int i=1;i<7;i++){
        cout<<" "<<reslt[i];
    }
   cout<<endl;
}

int backtrack(int x,int y,int idx,int trac_idx){
    if(idx==7){
        print();
        flg=1;
        return 0;
    }
    for(int i=0;i<3;i++){
      X=x+fx[i];
      Y=y+fy[i];

      if(valid(X,Y)){
            if (st[Y][X]==trac[trac_idx]){
            reslt[idx]=direction[i];
            backtrack(X,Y,idx+1,trac_idx+1);
            if(flg==1)return 0;
          }
      }
    }

}
main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        cin.ignore();
        for(int i=0;i<n;i++){
            getline(cin,st[i]);
        }
        flg=0;
        for(int i=0;i<m;i++){
            if(st[n-1][i]=='@'){
                backtrack(i,n-1,0,0);
                break;
            }
        }
    }

return 0;}
