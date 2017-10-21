#include<bits/stdc++.h>
using namespace std;
bool vis[130];
bool mark[130][130];
string st,st1;
int len;
vector<char> srt;
char reslt[30];


bool chk(char n,int N){
    for(int l=1;l<=N;l++){
        if(mark[reslt[l]][n]){
            return true;
        }
    }
    return false;
}

void print(){
    for(int i=1;i<=len;i++){
        printf("%c",reslt[i]);
    }
    printf("\n");

}

void backtrack(int idx){
    if(idx-1==len){
        print();
    }

    for(int i=0;i<len;i++){
            if(vis[srt[i]]==false && mark[reslt[idx-1]][srt[i]]==false ){
                if(chk(srt[i],idx))continue;
                vis[srt[i]]=true;
                reslt[idx]=srt[i];
                backtrack(idx+1);
                vis[srt[i]]=false;
                reslt[idx]=NULL;

            }

    }


}
main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int flg=0;
    while(getline(cin,st)){
        if(flg!=0)printf("\n");
        memset(mark,false,sizeof mark);
        for(int i=0;i<st.length();i++){
            if(st[i]!=' ')srt.push_back(st[i]);
        }
        sort(srt.begin(),srt.end());
        len=srt.size();
        getline(cin,st1);
        for(int i=0;i<st1.length();i+=4){
            mark[st1[i+2]][st1[i]]=true;

        }
        backtrack(1);
        srt.clear();
        flg=1;

    }

return 0;}
