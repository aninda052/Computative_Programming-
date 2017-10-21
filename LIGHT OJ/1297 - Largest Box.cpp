#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    double w,l;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        scanf("%lf %lf",&l,&w);
        double x=((l+w)-sqrt((l*l)+(w*w)-(w*l)))/6;
        double result =(w-2*x)*(l-2*x)*x;
        printf("Case %d: %.10lf\n",Case,result);
    }


return 0;}

