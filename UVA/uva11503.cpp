#include<bits/stdc++.h>
using namespace std;
//int arr[200000],sz[200000];
map<string,string>mp1;
map<string,int>mp2;
string root(string i){
    while(mp1[i]!=i){
        i=mp1[i];
    }
    return i;
}

void unon(string a,string b){

    string x,y;
    x=root(a);
    y=root(b);
    if(mp2[x]<mp2[y]){
    mp1[x]=mp1[y];
        if(x!=y)mp2[y]+=mp2[x];
            printf("%d\n",mp2[y]);
   }
   else{
    mp1[y]=mp1[x];
    if(x!=y)mp2[x]+=mp2[y];
    printf("%d\n",mp2[x]);
   }


}
int main (){
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);

    int t;
    string A,B;
    scanf("%d",&t);
    while(t--){
        int f;
        scanf("%d",&f);
        //ini(f);
        mp1.clear();
        mp2.clear();
        while(f--){
            cin>>A>>B;
            if(!mp1.count(A)){
                mp1[A]=A;
                mp2[A]=1;
            }
            if(!mp1.count(B)){
                mp1[B]=B;
                mp2[B]=1;
            }

            unon(A,B);

        }

    }
return 0;
}
