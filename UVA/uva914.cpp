#include<bits/stdc++.h>
int arr[1000005];
int arr1[79000];
int val[121];
using namespace std;
void shive (){
    int y=sqrt(1000000),x=1,flg;
    arr[2]=0;
    arr1[0]=2;
    for(int i=3;i<=y;i+=2){
        flg=1;
        if(arr[i]==0){
          arr[i]=x;
          flg=0;
          arr1[x]=i;
          x++;
          int i2=i+i;
          for(int j=i*i;j<=1000000;j+=i2){
                arr[j]=1;
          }

        }
        if(flg!=0)arr[i]=x;

    }
    for(int i=1001;i<=1000000;i+=2){
            flg=1;
        if(arr[i]==0){
            arr[i]=x;
            flg=0;
            arr1[x]=i;
            x++;
        }
        if(flg!=0)arr[i]=x;
    }
}
int main (){
   //freopen("in.txt","r",stdin);
  // freopen("out.txt","w",stdout);
  shive();
  int a,res=0,r1,t,x,y,str,fns;
  cin>>t;
  while(t--){
    cin>>x>>y;
    if(x==y){cout<<"No jumping champion"<<endl;continue;}
    if(x%2==0&&x!=2)x=x+1;
    if(y%2==0)y=y-1;
    r1=-1;res=0;
    str=arr[x];
    fns=arr[y]-1;

    if(arr[y]<arr[y+2])fns=fns+1;
    if(str!=fns){
        for(int i=str+1;i<=fns;i++){
            val[arr1[i]-arr1[i-1]]++;
        }
    }
    int flg=0;
    for(int i=1;i<=120;i++){
        if(r1==val[i]){flg=1;}
        if(r1<val[i]){res=i;r1=val[i];flg=0;}

    }

    if(flg==0)cout<<"The jumping champion is "<<res<<endl;
    else cout<<"No jumping champion"<<endl;

    for(int i=0;i<=120;i++){
        val[i]=0;
    }
  }

return 0;
}
