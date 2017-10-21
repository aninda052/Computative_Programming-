#include<bits/stdc++.h>
#define mx 2500005
using namespace std;
int cnt,tmpres,res;
vector<string>v;
struct muri{
    int arr[2];
    int mark;
    muri(){
        mark=0;
        arr[0]=0;
        arr[1]=0;

    }

}tree[mx];



int Insert(char w[],int root,int Len){

    for(int i=0;i<Len;i++){
        int x=w[i]-48;
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
        tree[i].arr[0]=0;
        tree[i].arr[1]=0;
        tree[i].mark=0;
    }
}

int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,n;
    string str;
    scanf("%d",&t);
    cin.ignore();
    cin.ignore();
    int flg=0;
    for(int c=1;c<=t;c++){
        if(flg)printf("\n");
        while(getline(cin,str) && str!=""){
            v.push_back(str);
        }
        sort(v.begin(),v.end());
        int sz=v.size();
        for(int i=0;i<sz;i++){
            int j=i;
            int cnt=1;
            while(j+1!=sz && v[j]==v[j+1]){
                cnt++;
                j=j+1;

            }

            double res=(cnt/(double)sz)*100;
            cout<<v[i];
            printf(" %.4f\n",res);
            i=j;
        }
        v.clear();
        flg=1;

    }
    return 0;
}


