#include<stdio.h>
int main (){

long long int a,x,sum,y,w;
scanf("%lld",&y);
for(w=0;w<y;w++){
scanf("%lld",&a);
sum=0;
for(x=1;x<a;x++)
{
    sum=sum+x;
   if(sum>a){break;}

}
if(a==1){printf("%lld\n",a);}
else { printf("%lld\n",x-1);}
}
return 0;}
