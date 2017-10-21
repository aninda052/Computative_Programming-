#include<bits/stdc++.h>
#define mx 305
using namespace std;
int table[mx][mx];
string x,y;

void LCS(int lenx,int leny){

    for(int i=0;i<=lenx;i++)table[i][0]=i;//row
    for(int i=0;i<=leny;i++)table[0][i]=i;//col
    for(int i=1;i<=lenx;i++){
        for(int j=1;j<=leny;j++){
            if(x[i-1]==y[j-1])table[i][j]=table[i-1][j-1];
            else table[i][j]=min(table[i-1][j],min(table[i][j-1],table[i-1][j-1]))+1;
        }
    }
}

main(){
    //freopen("in.txt","r",stdin);
    bool flg;
    int a,b;
    while(scanf("%d ",&a)!=EOF){
        getline(cin,x);
        scanf("%d ",&b);
        getline(cin,y);
        LCS(a,b);
        printf("%d\n",table[a][b]);

    }

return 0;}

