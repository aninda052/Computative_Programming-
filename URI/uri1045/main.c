#include<stdio.h>
#include<stdlib.h>
int main(){

    double a,b,c,d,X,Y,Z;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(a+b+abs(a-b))/2;
    X=(d+c+abs(d-c))/2;
    if(X==a)
    {
        if(b>c)
        {
            Y=b;
            Z=c;
        }
        else
        {
            Y=c;
            Z=b;
        }

    }
     if(X==b)
    {
        if(a>c)
        {
            Y=a;
            Z=c;
        }
        else
        {
            Y=c;
            Z=a;
        }

    }
     if(X==c)
    {
        if(a>b)
        {
            Y=a;
            Z=b;
        }
        else
        {
            Y=b;
            Z=a;
        }

    }
     if(X>=(Y+Z))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    if((X*X)==(Y*Y)+(Z*Z))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if((X*X)>(Y*Y)+(Z*Z))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((X*X)<(Y*Y)+(Z*Z))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(X==Y && X==Z)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((X==Y && X!=Z) || (X==Z && X!=Y) || (Z==Y && Y!=X))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
