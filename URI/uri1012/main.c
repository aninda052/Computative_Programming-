#include<stdio.h>

int main(){
    double A,B,C,tri,circle,tra,square,rec;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri=.5*A*C;
    circle=C*C*3.14159;
    tra=.5*(A+B)*C;
    square=B*B;
    rec=A*B;

    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rec);
    return 0;

}
