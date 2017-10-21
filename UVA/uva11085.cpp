#include<bits/stdc++.h>
using namespace std;
int bord[15];
bool vis[15][15];
int row,col,z;
vector<string>v;
string x,str;
bool atk(int x,int y){

    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if( abs(y-j)==abs(x-i) && vis[i][j] ){
                    return true;
            }

        }
            if(vis[x][i])return true;
            if(vis[i][y])return true;
    }
    return false;
}

void backtracking(int idx){
    if(idx-1==8){
        char c=bord[1]+48;
        x=c;
        for(int k=2;k<=8;k++){
            x+=' ';
            x+=bord[k]+48;
        }
       v.push_back(x);
        return;
    }
    if(idx==col){
        backtracking(idx+1);
        return ;
    }
    for(int j=1;j<=8;j++){
       // cout<<idx<<endl;
        if(atk(idx,j))continue;
        vis[idx][j]=true;
        bord[idx]=j;
        backtracking(idx+1);
        vis[idx][j]=false;

    }

}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    backtracking(1);
    int cnt,res,t=1;
    while(getline(cin,str)){
        res=10;
        for(int i=0;i<v.size();i++){
            cnt=0;
            for(int j=0;j<15;j+=2){
                if(str[j]!=v[i][j])cnt++;
            }
            res=min(res,cnt);
        }
        printf("Case %d: %d\n",t,res);
        t++;
    }


return 0;}

