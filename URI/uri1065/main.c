#include<stdio.h>

int main() {

int a,i;
scanf("%d",&a);
if(a%2==0)
{
  for(i=a+1;i<=a+11;i=i+2)
  printf("%d\n",i);
}
else
{
  for(i=a;i<=a+11;i=i+2)
    printf("%d\n",i);
}

return 0;
}
