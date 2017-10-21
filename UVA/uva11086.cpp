#include<bits/stdc++.h>
#define mx 1048580
using namespace std;
bool arr[mx];
int v[mx],cnt1;
void sieve(){
    int x=sqrt(mx);
    v[0]=2;
    arr[1]=true;
    cnt1=1;
    for(int i=3;i<=x;i+=2){
        if(arr[i]==false){
            //v.push_back(i);
            v[cnt1]=i;
            cnt1++;
            for(int j=i*i;j<=mx;j+=i){
                arr[j]=true;
            }
        }
    }

    for(int i=x+1;i<=mx;i+=2){
        if(arr[i]==false){v[cnt1]=i;cnt1++;}
    }
}
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m;
    sieve();
    while(scanf("%d",&n)!=EOF){
        int cnt=0;
        for(int i=0;i<n;i++){
            scanf("%d",&m);
            int x=sqrt(m);
            for(int j=0;j<cnt1 && v[j]<=x;j++){
                if(m%v[j]==0 && ((arr[m/v[j]]==false && (m/v[j])%2!=0) || m/v[j]==2) )cnt++;
                //cout<<m<<"="<<cnt<<endl;
            }
        }
        printf("%d\n",cnt);
    }
return 0;}
