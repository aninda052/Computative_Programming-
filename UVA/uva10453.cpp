#include<bits/stdc++.h>
#define mx 20005
using namespace std;

int table[1005][1005],tmp,ans;
string arr1;
int sol(int i,int j){

    if(i>=j)return 0;
    if(table[i][j]!=-1)return table[i][j];
    if(arr1[i]==arr1[j])ans=sol(i+1,j-1);
    else{
        ans=min(sol(i,j-1),sol(i+1,j))+1;
    }
    return table[i][j]=ans;
}

void print(int i,int j){

    if(i>j)return ;
    if(i==j){cout<<arr1[i];return ;}
    if(arr1[i]==arr1[j]){
        cout<<arr1[i];
        print(i+1,j-1);
        cout<<arr1[i];


    }
    else{
        if(table[i+1][j]>=table[i][j-1]){
            cout<<arr1[j];
            print(i,j-1);
            cout<<arr1[j];
        }
        else{
            cout<<arr1[i];
            print(i+1,j);
            cout<<arr1[i];
        }
    }

}



main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    while(cin>>arr1){
        tmp=arr1.length()-1;
        memset(table,-1,sizeof table);
        printf("%d ",sol(0,tmp));
        print(0,tmp);
        printf("\n");

    }
    return 0;
}



