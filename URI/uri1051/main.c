#include<stdio.h>

int main(){

double a,b,c,d;
scanf("%lf",&a);
if(0<=a && a<=2000.00)
   {printf("Isento\n");}
else if(2000.01<=a && a<=3000.00)

   {
    b=(a-2000.00)*.08;
    printf("R$ %.2lf\n",b);
   }

 else if(3000.01<=a && a<=4500.00)
    {

    c=((a-3000)*.18)+80;
    printf("R$ %.2lf\n",c);
    }
else if(a>4500.00)

   {
    d=((a-4500)*.28)+350;
    printf("R$ %.2lf\n",d);
   }
    return 0;
}
