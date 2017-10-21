#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main (){
    int z,c=1;
    double a,u,v,t,s,x,d,f;
    while(cin>>z&&z!=0)
    {
        cin>>x>>d>>f;
        if(z==1)
        {
            a=(d-x)/f;
            s=((x+d)*f)/2;
            printf("Case %d: %.3lf %.3lf\n",c,s,a);
        }
        else if(z==2)
        {
            t=(d-x)/f;
            s=((x+d)*t)/2;
            printf("Case %d: %.3lf %.3lf\n",c,s,t);
        }
        else if(z==3)
        {
            v=sqrt((x*x)+(2*d*f));
            t=(v-x)/d;
            printf("Case %d: %.3lf %.3lf\n",c,v,t);
        }
        else if(z==4)
        {
            u=sqrt((x*x)-(2*d*f));
            t=(x-u)/d;
            printf("Case %d: %.3lf %.3lf\n",c,u,t);
        }
            c++;
    }

return 0;}
