#include<stdio.h>

int main (){
int a,s,x,z=0;
scanf("%d %d",&a,&s);
for (x=a;x<=s;x++)
if(1<=x%13 && x%13<=12){
z=z+x;}
printf("%d ",z);
return 0;
}
