#include<bits/stdc++.h>
using namespace std;
vector<int>arr[5];
bool vis[6][6];
int res[9];
void path(){

    arr[1].push_back(2);arr[1].push_back(3);arr[1].push_back(5);
    arr[2].push_back(1);arr[2].push_back(3);arr[2].push_back(5);
    arr[3].push_back(1);arr[3].push_back(2);arr[3].push_back(4);arr[3].push_back(5);
    arr[4].push_back(3);arr[4].push_back(5);
    arr[5].push_back(1);arr[5].push_back(2);arr[5].push_back(3);arr[5].push_back(4);

}

void backtrack(int N,int idx){

    if(idx-1==8){
        cout<<"1";
        for(int j=1;j<9;j++){
            cout<<res[j];
        }
        cout<<endl;
        return;

    }


    for(int i=0;i<arr[N].size();i++){
        if(vis[N][arr[N][i]]==false && vis[arr[N][i]][N]==false){
            vis[N][arr[N][i]]=true;
            vis[arr[N][i]][N]=true;
            res[idx]=arr[N][i];
            backtrack(arr[N][i],idx+1);
            vis[N][arr[N][i]]=false;
            vis[arr[N][i]][N]=false;
        }
    }

}

main(){
    path();
backtrack(1,1);
return 0;}
