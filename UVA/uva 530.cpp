#include<bits/stdc++.h>
using namespace std;
int main (){
    double m,n,z,cnt=1,a;
    while(cin>>m>>n ){
        if(m==0&& n==0)break;
        cnt=1;
        a=m;
        z=m-n;
        if(z>n) z=n;
        while(z){
            cnt=cnt*(m/z);
            m--;
            z--;

    }

      // cout<<m<<" things taken "<<n<<" at a time is "<<cnt<<" exactly."<<endl;
        printf("%.0lf\n",cnt);
    }
    return 0;
}
