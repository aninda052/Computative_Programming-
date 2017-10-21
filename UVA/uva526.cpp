#include<bits/stdc++.h>
#define mx 105
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

void resultprint(int lenx,int leny){
    printf("%d\n",table[lenx][leny]);
    int cnt=1;
    while(lenx || leny){
        if(lenx && leny && x[lenx-1]==y[leny-1])lenx--,leny--;
        else if(lenx && table[lenx-1][leny]+1==table[lenx][leny])printf("%d Delete %d\n",cnt++,lenx),lenx--;
        else if(leny && lenx && ( table[lenx-1][leny-1]+1==table[lenx][leny]))printf("%d Replace %d,%c\n",cnt++,lenx,y[leny-1]),lenx--,leny--;
        else if(leny) printf("%d Insert %d,%c\n",cnt++,lenx+1,y[leny-1]),leny--;
    }

}

main(){
    //freopen("in.txt","r",stdin);
    bool flg;
    while(getline(cin,x)){
        getline(cin,y);
        if(flg)printf("\n");
        LCS(x.length(),y.length());
        resultprint(x.length(),y.length());
        flg=true;
    }

return 0;}
