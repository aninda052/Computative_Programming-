#include<bits/stdc++.h>
using namespace std;
int dp[201][201],arr[201];
int total,res,I;

int func(int i,int cost){

    if(dp[i][cost]!=-1)return dp[i][cost];
    if(i==I) return (abs(cost-(total-cost) ));
    dp[i][cost]=min(func(i+1,cost+arr[i]),func(i+1,cost));
    return dp[i][cost];

}

void mms(int x,int y){
    for(int i=0;i<=x;i++)
        for(int j=0;j<=y;j++)dp[i][j]=-1;
}

main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string st;
    int n;
    scanf("%d",&n);
    cin.ignore();
    for(int j=0;j<n;j++){
       getline(cin,st);
       int len=st.length();
        total=0;
        I=0;
        int tmp=0,x=1;
        for(int i=len-1;i>=0;i--){
            if(st[i]==' '){
                arr[I]=tmp;
                total+=tmp;
                tmp=0;
                x=1;
                I++;
            }
            else{
                tmp+=(st[i]-48)*x;
                x*=10;
            }

        }
        arr[I]=tmp;
        total+=tmp;
        mms(++I,total);
        if(func(0,0))printf("NO\n");
        else printf("YES\n");

    }
return 0;}

