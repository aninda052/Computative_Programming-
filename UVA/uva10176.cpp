#include<bits/stdc++.h>
using namespace std;
int bigmod(int x, int p){
    if(p==0)return 1;
    if(p%2==0){
        long long int something=bigmod(x,p/2);
        return ((something%131071)*(something%131071))%131071;

    }
    else return ((x%131071)*bigmod(x,p-1)%131071)%131071;


}
main(){
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
string st;
char c;
while(cin>>c){
    st=c;
    while(cin>>c && c!='#'){
        st+=c;
    }
    int len=st.length();
    int j=0,res=0;
    for(int i=len-1;i>=0;i--){
        if(st[i]==49){
           int tmp=bigmod(2,j);
            res=(res+tmp)%131071;
        }
        j++;
    }
    if(res==0)printf("YES\n");
    else printf("NO\n");
}

}
