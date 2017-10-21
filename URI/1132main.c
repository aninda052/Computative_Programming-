#include<stdio.h>
void swap (int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
   return;
}
int main (){
int a,s,x,z=0,c;
scanf("%d %d",&a,&s);
if(a>s){swap(&a,&s);}
for (x=a;x<=s;x++)
if(x%13!=0){
z=z+x;}

printf("%d\n",z);
return 0;
}
