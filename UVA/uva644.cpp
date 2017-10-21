//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<stdio.h>
#define mx 50000
using namespace std;
int cnt;
bool res;
struct st{
    bool endmark;
    int arr[2];
    st(){
        endmark=false;
        arr[0]=0;
        arr[1]=0;

    }
}tree[mx];

void Insert(int root,int Len,string w){

    for(int i=0;i<Len;i++){
        int x=w[i]-48;
        if(tree[root].endmark)res=true;
        if(!tree[root].arr[x]){
            tree[root].arr[x]=++cnt;
            //cout<<root<<" "<<x<<" "<<cnt<<endl;
        }

        root=tree[root].arr[x];
    }
    //cout<<root<<endl;
    if(tree[root].endmark)res=true;
    if(tree[root].arr[0])res=true;
    if(tree[root].arr[1])res=true;
    tree[root].endmark=true;
}

void delTree(int a){
        for(int i=0;i<=a;i++){
            tree[i].arr[0]=0;
            tree[i].arr[1]=0;
            tree[i].endmark=false;
        }

}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string str,str1;
    //char c;
    int T=1;
    while(cin>>str){
        cnt=0;
        res=false;
        //str1=c;
       // cout<<"-> "<<c<<endl;
       Insert(0,str.size(),str);
        while(cin>>str){
            if(str[0]>49)break;
            if(res==false){
                //str1+=str;
                int len=str.size();
                Insert(0,len,str);
            }
            str1="";
        }
        if(res)printf("Set %d is not immediately decodable\n",T);
        else printf("Set %d is immediately decodable\n",T);
        T++;
        delTree(cnt);
        cin.ignore();
    }

return 0;}

