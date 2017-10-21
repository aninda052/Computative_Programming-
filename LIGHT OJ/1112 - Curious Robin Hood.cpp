#include<bits/stdc++.h>
#define mx 100010
using namespace std;

int arr[mx],tree[mx*3];

int init(int nood, int start, int End){

    if(start==End){
        return tree[nood]=arr[start];

    }
    int left=nood*2;
    int right=left+1;
    int mid=(start+End)/2;
    return tree[nood]=init(left,start,mid)+init(right,mid+1,End);

}

int query(int nood,int start, int End,int i,int j,bool mark){

    if(i<=start && End<=j){int y=tree[nood];if(mark)tree[nood]=0;return y;}
    if(j<start || End<i) return 0;
    int left=nood*2;
    int right=left+1;
    int mid=(start+End)/2;
	int z=query(left,start,mid,i,j,mark)+query(right,mid+1,End,i,j,mark);
	if(mark)tree[nood]-=z;
    return z;

}

int update(int nood, int start,int End,int index,int newvalue){

    if(index<=start && index>=End){return tree[nood]+=newvalue;}
    if(index<start || index>End)return tree[nood];
    int left=nood*2;
    int right=left+1;
    int mid=(start+End)/2;
    return tree[nood]=update(left,start,mid,index,newvalue)+update(right,mid+1,End,index,newvalue);
}

main(){

    int t,n,q,a,b,x;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&n,&q);
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        init(1,0,n-1);
        printf("Case %d:\n",i);
        while(q--){
            scanf("%d",&x);
            if(x==1){
                scanf("%d",&a);
		int tmp=query(1,0,n-1,a,a,true);
                printf("%d\n",tmp);
		//update(1,0,n-1,a,-tmp);
            }
            else if(x==2){
                scanf("%d %d",&a,&b);
                update(1,0,n-1,a,b);
            }
            else{
                scanf("%d %d",&a,&b);
                printf("%d\n",query(1,0,n-1,a,b,false));
            }
        }

    }



return 0;}

