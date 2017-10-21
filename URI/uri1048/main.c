#include<stdio.h>

int main(){

double a,b;
scanf("%lf",&a);
if(0<a&&a<=400.00)

  {
    b=a*.15;
    a=a+b;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",a,b);
  }
else if(400.01<=a && a<=800.00)
   {
    b=a*.12;
    a=a+b;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",a,b);
   }
else if(800.01<=a && a<=1200.00)
   {
    b=a*.1;
    a=a+b;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",a,b);
   }
else if(1200.01<=a && a<=2000.00)
   {
    b=a*.07;
    a=a+b;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",a,b);
   }
else if(2000.01<=a)
    {b=a*.04;
    a=a+b;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",a,b);
    }
    return 0;


}
