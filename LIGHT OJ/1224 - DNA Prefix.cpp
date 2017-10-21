#include<bits/stdc++.h>
#define mx 2500005
using namespace std;
int cnt,tmpres,res;

struct muri{
    int arr[4];
    int mark;
    muri(){
        mark=0;
        for(int i=0;i<4;i++)arr[i]=0;

    }

}tree[mx];

int convert(int a){
    if(a==65)return 0;
    if(a==67)return 1;
    if(a==71)return 2;
    if(a==84)return 3;
}

int Insert(char w[],int root,int Len){

    for(int i=0;i<Len;i++){
        int x=convert(w[i]);
        if(tree[root].arr[x]==0){
            tree[root].arr[x]=++cnt;
        }
        root=tree[root].arr[x];
        ++tree[root].mark;
        tmpres=max((tree[root].mark)*(i+1),tmpres);
    }
    return tmpres;
}

void del(){

    for(int i=0;i<=cnt;i++){
        for(int j=0;j<4;j++)tree[i].arr[j]=0;
        tree[i].mark=0;
    }
}

int main() {
    int t,n;
    char str[52];
    scanf("%d",&t);
    for(int c=1;c<=t;c++){
        scanf("%d",&n);
        cnt=0;
        res=0;
        while(n--){
            scanf("%s",str);
            tmpres=0;
            int len=strlen(str);
            res=max(Insert(str,0,len),res);
            res=max(len,res);

        }
        printf("Case %d: %d\n",c,res);
        del();
    }
    return 0;
}
