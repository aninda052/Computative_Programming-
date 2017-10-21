#include<bits/stdc++.h>
using namespace std;
bool vis[92];
bool mark[92][92];
string st,st1;
int len,FLG=0;
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
    printf("%c",reslt[1]);
    for(int i=2;i<=len;i++){
        printf(" %c",reslt[i]);
    }
    printf("\n");

}

void backtrack(int idx){
    if(idx-1==len){
        print();
        FLG=1;
        return;
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
    int flg=0,t;
    scanf("%d",&t);
    cin.ignore();
    while(t--){
        if(flg!=0)printf("\n");
        cin.ignore();
        getline(cin,st);
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
        if(FLG==0)printf("NO\n");
        srt.clear();
        flg=1;
        FLG=0;

    }

return 0;}

