#include<bits/stdc++.h>
using namespace std;
int dp[10005];
int a, b, c, d, e, f;
int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=NULL)return dp[n];
    dp[n]=( fn(n-1)% 10000007 + fn(n-2) % 10000007+ fn(n-3) % 10000007+ fn(n-4) % 10000007+ fn(n-5) % 10000007+ fn(n-6)% 10000007 );
    return dp[n];
}
int main() {
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n)% 10000007);
        fill(dp,dp+n+2,NULL);
    }
    return 0;
}
