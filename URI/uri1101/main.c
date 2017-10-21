#include<stdio.h>
void ghurantik (int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
   return;
}
int main(){

int a,s,d,r,w=1;

while(w>0){
    r=0;
    scanf("%d %d",&s,&a);
    if(s<=0 || a<=0){return 0;}
    else if(s>a)
  {
     ghurantik(&a,&s);
  }

    for(d=s;d<=a;d++){
    printf("%d ",d);
    r=r+d;}
    printf("Sum=%d\n",r);}


return 0;
}
