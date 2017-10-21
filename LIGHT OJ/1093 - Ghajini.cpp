#include<bits/stdc++.h>>
#define mx 100005
using namespace std;
int arr[mx],maxvalue[mx*3],minvalue[mx*3];

void init(int nood,int start, int End){

    if(start == End){
        //cin>>minvalue[nood];
        maxvalue[nood]=arr[start];
        minvalue[nood]=arr[start];
        return;
    }
    int left= nood*2;
    int right=left+1;
    int mid= (start + End)/2;
    init(left,start,mid);
    init(right,mid+1,End);
    maxvalue[nood]=max(maxvalue[left],maxvalue[right]);
    minvalue[nood]=min(minvalue[left],minvalue[right]);
    //cout<<nood<<" "<<maxvalue[nood]<<" "<<minvalue[nood]<<endl;

}

int query(int nood,int start,int End,int i,int j,bool mark){
//cout<<
    if(i>End || j<start){
        if(mark) return -10000; //true==mx
        else return 1000000000;
    }
    if(i<=start && End<=j){
        if(mark){
            return maxvalue[nood];
        }
        else return minvalue[nood];
    }
    int left= nood*2;
    int right=left+1;
    int mid= (start + End)/2;
    int x=query(left,start,mid,i,j,mark);
    int y=query(right,mid+1,End,i ,j,mark);
    if(mark)return max(x,y);
    return min(x,y);

}

main(){

    int t,n,d;
    scanf("%d",&t);
    for(int I=1;I<=t;I++){
        scanf("%d %d",&n,&d);
        for(int j=1;j<=n;j++){
            scanf("%d",&arr[j]);
        }
        init(1,1,n);
        int result=0;
        for(int i=1;i+d-1<=n;i++){
            int a=query(1,1,n,i,i+d-1,true);
            int b=query(1,1,n,i,i+d-1,false);
            //cout<<i<<" "<<a<<" "<<b<<" "<<a-b<<endl;
            result=max(a-b,result);
        }
        printf("Case %d: %d\n",I,result);

    }
return 0;}
