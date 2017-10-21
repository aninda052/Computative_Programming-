#include<bits/stdc++.h>
using namespace std;
char srt[50];
int len,r;
char reslt[35];

void print(){
    for(int j=1;j<=r;j++){
        printf("%c",reslt[j]);
    }
    printf("\n");
}
void backtrack(int idx,int k){
    if(idx-1==r){
        print();
        return ;
    }

    for(int i=k;i<len;i++){
            if(reslt[idx]==srt[i])continue;
            reslt[idx]=srt[i];
            backtrack(idx+1,i+1);
            reslt[idx+1]=NULL;
    }


}
main(){
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    while(scanf("%s %d",&srt,&r)!=EOF){
        len=strlen(srt);
        sort(srt,srt+len);
        if(srt[0]==srt[len-1]){
            for(int i=0;i<r;i++){
                printf("%c",srt[i]);
            }
            printf("\n");
        }
        else{
            reslt[1]=NULL;
            backtrack(1,0);
        }
    }

return 0;}

