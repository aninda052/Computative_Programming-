#include<bits/stdc++.h>
#define mx 50009
using namespace std;
vector<int> arr;
int binarysearch(int sz,int n){
    int strt=0;
    int ed=sz-1;
    int mid;
    while(strt<=ed){
        mid=(strt+ed)/2;
        if(arr[mid]==n)return mid;
        else if(arr[mid]>n)ed=mid-1;
        else strt=mid+1;
    }
    return strt;
}

main (){
    //freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int N,Q,q;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int v;
        scanf("%d",&v);
        if(i==0)arr.push_back(v);
        if(arr[arr.size()-1]!=v && i!=0)arr.push_back(v);
    }
    scanf("%d",&Q);
    while(Q--){
        scanf("%d",&q);
        int res=binarysearch(arr.size(),q);
        if(arr[res]==q){
            if(res-1<0)printf("X ");
            else printf("%d ",arr[res-1]);
            if(res+1>=arr.size())printf("X\n");
            else printf("%d\n",arr[res+1]);
        }
        else {
            if(res-1<0)printf("X ");
            else printf("%d ",arr[res-1]);
            if(res>=arr.size())printf("X\n");
            else printf("%d\n",arr[res]);
        }
    }

return 0;}
