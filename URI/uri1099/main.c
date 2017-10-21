#include<stdio.h>
void swap (int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
   return;
}
int main(){

int a,s,d,r,q,w;
scanf("%d",&a);
for(q=0;q<a;q++)
    {
        w=0;
    scanf("%d %d",&s,&d);
    if(s>d){swap(&s,&d);}

    if(s-d==1){printf("");}
    else{if(s%2==0)
        {
            for (r=s+1;r<d;r=r+2){w=w+r;}
        }
        else
        {
            if(s-d==2){printf("");}
            else
                {
                for (r=s+2;r<d;r=r+2){w=w+r;}}
                }

        }
printf("%d\n",w);}

return 0;
}

