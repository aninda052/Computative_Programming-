#include<bits/stdc++.h>>
#define mx 100990
#define mod  1000000007
using namespace std;
int result=0,tree[mx*4];

int query(int nood,int start, int End,int i,int j){

    if(j<start || End<i)return 0;
    if(start>=i && j>=End){
        return tree[nood];
    }
    int left= nood*2;
    int right=left+1;
    int mid= (start + End)/2;
    return (query(left,start,mid,i,j)+query(right,mid+1,End,i,j))%mod;

}

int update(int nood,int start,int End,int i,int newvalue){

    if(i>End || i<start){
         return tree[nood]; //true==mx
    }
    if(i==start && End==i){
        //cout<<start<<" "<<End<<" "<<i<<" "<<nood<<" "<<tree[nood]<<" "<<newvalue<<endl;
        return tree[nood]=(newvalue)%mod;
    }
    int left= nood*2;
    int right=left+1;
    int mid= (start + End)/2;
    int x=update(left,start,mid,i,newvalue);
    int y=update(right,mid+1,End,i,newvalue);
//cout<<x<<" "<<y<<" "<<left<<" "<<right<<endl;
    return tree[nood]=(tree[left]+tree[right])%mod;

}

main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
    int t,n,s,D,arr[mx];
    scanf("%d",&t);
    for(int I=1;I<=t;I++){
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }

        vector<int>Newarr(arr,arr+n);
        sort(Newarr.begin(),Newarr.end());
        map<int,int>mp;

        int y=1;
        for (int i=0;i<n;i++){
            if(!mp.count(Newarr[i])){
                mp[Newarr[i]]=y;
                //cout<<Newarr[i]<<" "<<y<<endl;
                y++;
            }
        }

        for(int i=1;i<=(n*4);i++)tree[i]=0;

        for(int i=0;i<n;i++){
            int y=mp[arr[i]];
            //cout<<y<<" "<<arr[i]<<endl;
            int a=query(1,1,n,1,y);
            //cout<<a<<endl;
            result=update(1,1,n,y,a+1);
            //cout<<i<<" "<<a<<" "<<b<<" "<<a-b<<endl;
            //result=max(a,result);
        }
        printf("Case %d: %d\n",I,result);

    }
return 0;}
