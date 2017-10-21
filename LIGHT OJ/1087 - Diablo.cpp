#include<bits/stdc++.h>
#define mx 1500900
using namespace std;

int arr[mx],tree[mx*3],N,Q;


void ini(int node,int strt,int End){

    if(strt==End){

        if(strt<N)tree[node]=1;
        else tree[node]=0;
        return;
    }
    int mid=(strt+End)/2;
    int left=node*2;
    int right=left+1;
    ini(left,strt,mid);
    ini(right,mid+1,End);
    tree[node]=tree[left]+tree[right];

}

int query(int node,int strt,int End,int pos){

    if(strt==End){
        tree[node]=0;
        //cout<<node<<"----"<<strt<<endl;
        return arr[strt];
    }
    int mid=(strt+End)/2;
    int left=node*2;
    int right=left+1;
    int res;
    if(pos<=tree[left])res=query(left,strt,mid,pos);
    else res=query(right,mid+1,End,pos-tree[left]);
    tree[node]=tree[left]+tree[right];
    return res;
}

void update(int node,int strt,int End,int pos){

    if(strt==End){
        tree[node]=1;
        //cout<<"----"<<node<<endl;
        return ;
    }
    int mid=(strt+End)/2;
    int left=node*2;
    int right=left+1;
    if(pos<=mid)update(left,strt,mid,pos);
    else update(right,mid+1,End,pos);
    tree[node]=tree[left]+tree[right];
}
main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
    int t,n,a;
    char s[2];
    scanf("%d",&t);
    for(int I=1;I<=t;I++){
        scanf("%d %d",&n,&Q);
        for(int j=0;j<n;j++){
            scanf("%d",arr+j);
        }
       // for(int i=1;i<=(n*4);i++)tree[i]=0;
        printf("Case %d:\n",I);
        N=n;
        ini(1,0,n+Q-1);

        for(int i=0;i<Q;i++){
            //cin.ignore();
            scanf("%s %d",&s,&a);
            //cout<<s<<" -----"<<a<<endl;
            if(s[0]=='a'){
               // N++;
               //cout<<"---"<<N<<endl;
                update(1,0,n+Q-1,N);
                arr[N++]=a;
                //cout<<"--------------------"<<a<<endl;
            }
            else{
                //cout<<s<<" - "<<tree[1]<<endl;
                if(a>tree[1])printf("none\n");
                else printf("%d\n",query(1,0,n+Q-1,a));
            }
        }


    }

return 0;}
