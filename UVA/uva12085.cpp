#include<bits/stdc++.h>
using namespace std;

int convo(int x,int y){

    string X,Y;
    stringstream XX;
    XX<<x;
    stringstream YY;
    YY<<y;
    X=XX.str();
    Y=YY.str();
    int len=X.length();
    string res="\0";
   int flg1=0;
    for(int j=0;j<len;j++){
        if(flg1==1)res+=Y[j];
        if(X[j]!=Y[j] && flg1==0){res+=Y[j];flg1=1;}


    }
    return atoi(res.c_str());

}
main(){

  // freopen("in.txt","r",stdin);
   int Case=1,N,arr[100005];
    while(1){
        scanf("%d",&N);
        if(N==0)break;
        for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
        }
        printf("Case %d:\n",Case);
        int tmp,flg=0;
        for(int i=0;i<N;i++){
            if(arr[i]+1==arr[i+1]){
                if(flg==0){tmp=arr[i];flg=1;}
            }
            else{
                if(flg==1){
                    //;
                    printf("0%d-%d\n",tmp,convo(tmp,arr[i]));
                    flg=0;
                }
                else printf("0%d\n",arr[i]);
            }
        }
        printf("\n");
        Case++;
    }
return 0;}
