#include<stdio.h>

int main(){

    double a,x,y;
    scanf("%lf %lf",&x,&y);
    if(x==1)
    {
        a=4*y;
        printf("Total: R$ %.2lf\n",a);

    }
    if(x==2)
    {
        a=4.5*y;
        printf("Total: R$ %.2lf\n",a);

    }
    if(x==3)
    {
        a=5*y;
        printf("Total: R$ %.2lf\n",a);

    }
    if(x==4)
    {
        a=2*y;
        printf("Total: R$ %.2lf\n",a);

    }
    if(x==5)
    {
        a=1.5*y;
        printf("Total: R$ %.2lf\n",a);

    }

    return 0;
}
