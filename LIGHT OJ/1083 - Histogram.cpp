
#include<bits/stdc++.h>
#define mx 30005
using namespace std;

int arr[mx],mxreslt,N;
pair<int,int>tree[mx*3];


void sol(int nood, int start,int End){

    if(start==End){
        scanf("%d",&arr[start]);
        //cout<<arr[start]<<"---"<<start<<"----"<<nood<<endl;
        tree[nood]=make_pair(arr[start],start); //first==value,second==index
        return;
    }
    int left=nood*2;
    int right=left+1;
    int mid=(start+End)/2;
    sol(left,start,mid);
    sol(right,mid+1,End);
    if(tree[left].first<tree[right].first)tree[nood]=make_pair(tree[left].first,tree[left].second);
    else tree[nood]=make_pair(tree[right].first,tree[right].second);
    //cout<<nood<<"-- "<<tree[nood].first<<" "<<tree[nood].second<<endl;



}

pair<int,int> query(int nood, int start,int End,int i,int j){
//cout<<nood<<" "<<start<<" "<<End<<" "<<i<<" "<<j<<endl;
    if(j<start || End<i){
        return make_pair(9999999999,-1);
    }
    if(i<=start && End<=j){
        //cout<<nood<<"-- "<<tree[nood].first<<" "<<tree[nood].second<<endl;
        return tree[nood];
    }
    int left=nood*2;
    int right=left+1;
    int mid=(start+End)/2;
    pair<int,int>a=query(left,start,mid,i,j);
    pair<int,int>b=query(right,mid+1,End,i,j);
   // cout<<a.first<<" "<<a.second<<endl;
    if(a.first<b.first)return make_pair(a.first,a.second);
    else return make_pair(b.first,b.second);

}

int Sol(int i,int j){
    if(i>j)return -1;
    if(i==j)return arr[i];
    pair<int,int>a=query(1,1,N,i,j);
   // cout<<a.first<<" "<<a.second<<endl;
    int tmp=max(Sol(i,a.second-1),Sol(a.second+1,j));
    return max(tmp,(j-i+1)*a.first);
}

main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int I=1;I<=t;I++){
        scanf("%d",&N);
        mxreslt=-10000000;
        sol(1,1,N);
      /*  for(int j=2;j<=n;j++){
            for(int k=0;k+j<=n;k++){
                query(1,0,n-1,k,k+j-1);
            }
        } */

        printf("Case %d: %d\n",I,Sol(1,N));
    }

return 0;}
