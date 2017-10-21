#include<stdio.h>
#include <stdlib.h>

int main (){

double y,z,q,w,a,b,t;
int x,n,g,h;
scanf("%d",&g);
for(h=0;h<g;h++) {
scanf("%lf %lf %lf",&a,&b,&t);
y=100/(a+b);
z=y*a;
w=z-33.33;
q=33.33/w;
x=t/q;
if(x>t){n=t;printf("%d\n",n);}
else if (x<0){printf("0\n");}
else{printf("%d\n",x);}}
return 0;}
