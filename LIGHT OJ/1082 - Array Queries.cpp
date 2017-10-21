#include<bits/stdc++.h>
#define mx 100005
using namespace std;

int arr[mx],tree[mx*3];

int init(int nood, int start, int End){

    if(start==End){
	//cout<<nood<<" "<<arr[start]<<endl;
        return tree[nood]=arr[start];
	

    }
    //if(arr[start]==arr[End])tree[nood]=2;
    int left=nood*2;
    int right=left+1;
    int mid=(start+End)/2;
int x=min(init(left,start,mid),init(right,mid+1,End));
//cout<<nood<<"-----"<<x<<endl;
    return tree[nood]=x;

}

int query(int nood,int start, int End,int i,int j){
//cout<<nood<<" "<<start<<" "<<End<<endl;
    if(i<=start && End<=j){return tree[nood];}
    if(j<start || End<i) return 100000000;

    int left=nood*2;
    int right=left+1;
    int mid=(start+End)/2;
    return min(query(left,start,mid,i,j),query(right,mid+1,End,i,j));

}

/*int update(int nood, int start,int End,int index,int newvalue){

    if(index<=start && index>=End)return tree[nood]=newvalue;
    if(index<start || index>End)return 0;
    int left=nood*2;
    int right=left+1;
    int mid=(start+End)/2;
    return tree[nnod]=update(left,start,mid,i,newvalue)+update(right,mid+1,End,i,newvalue);
}
*/
main(){

    int t,n,q,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&n,&q);
        for(int j=1;j<=n;j++){
            scanf("%d",&arr[j]);
        }
        init(1,1,n);
	printf("Case %d:\n",i);
        while(q--){

            scanf("%d %d",&a,&b);
            printf("%d\n",query(1,1,n,a,b));
        }

    }



return 0;}

