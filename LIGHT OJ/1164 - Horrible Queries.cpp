#include<bits/stdc++.h>
#define mx 100010
using namespace std;


int sum=0,propagate=1;

long long  tree[mx*3][2];



void update(int nood, int start, int End, int i, int j, int newvalue){

    if(i==start && j==End){
    //cout<<"---------------"<<endl;
        tree[nood][propagate]+=newvalue;
        tree[nood][sum]+=((j-i+1)*newvalue);
        return;
    }

     int left=nood*2;
     int right=left+1;
     int mid=(start+End)/2;

    if(j<=mid)update(left,start,mid,i,j,newvalue);
    else if(i>mid)update(right,mid+1,End,i,j,newvalue);
    else {
        update(left,start,mid,i,mid,newvalue);
        update(right,mid+1,End,mid+1,j,newvalue);
    }
    tree[nood][sum]=tree[left][sum]+tree[right][sum]+tree[nood][propagate]*(End-start+1);
}

long long int query(int nood,int start,  int End,int i,int j,long long int Carry){

    if(i==start && End==j){
        return tree[nood][sum]+Carry*(j-i+1);
    }

    int left=nood*2;
    int right=left+1;
    int mid=(start+End)/2;
    if(j<=mid)return query(left,start,mid,i,j,Carry+tree[nood][propagate]);
    else if(i>mid)return query(right,mid+1,End,i,j,Carry+tree[nood][propagate]);
	else return query(left,start,mid,i,mid,Carry+tree[nood][propagate])+query(right,mid+1,End,mid+1,j,Carry+tree[nood][propagate]);

}

main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
    int t,n,q,a,b,c,x;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&n,&q);
        memset(tree,0,sizeof tree);
        printf("Case %d:\n",i);
        while(q--){
            scanf("%d",&x);
            if(x){
                scanf("%d %d",&a,&b);
                printf("%lld\n",query(1,0,n-1,a,b,0));
            }
            else{
                scanf("%d %d %d",&a,&b,&c);
                update(1,0,n-1,a,b,c);
            }
        }

    }



return 0;}

