#include<stdio.h>

int main(){

    char n[100];
    scanf("%s",&n);
    double sal,sold,Total,A;
    scanf("%lf %lf",&sal,&sold);
    A=sold*.15;
    Total=sal+A;
    printf("TOTAL = R$ %.2f\n",Total);
    return 0;
}
