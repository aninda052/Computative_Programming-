#include<bits/stdc++.h>
#define mx 10009
using namespace std;
 int arr[mx];
int binarysearch(int strt,int ed,int X){
    int mid;
    while(strt<=ed){
        mid=(strt+ed)/2;
        if(arr[mid]==X)return mid;
        else if(arr[mid]<X)strt=mid+1;
        else ed=mid-1;
    }
   return -1;
 }
 main(){
     //freopen("in.txt","r",stdin);
     //freopen("out.txt","w",stdout);
    int N,tk;
    while(scanf("%d",&N)!=EOF){
        for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
        }
        scanf("%d",&tk);
        sort(arr,arr+N);
        int x,y;
        for(int i=0;i<N;i++){
            int res=binarysearch(i+1,N-1,tk-arr[i]);
            if(res!=-1){
                x=i;y=res;
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",arr[x],arr[y]);
    }

 return 0;}
