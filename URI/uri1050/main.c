#include<stdio.h>

int main (){

    int a;
    scanf("%d",&a);
    if(a==61||a==71||a==11||a==21||a==32||a==19||a==27||a==31)
        {
        if(a==61)
            printf("Brasilia\n");
        if(a==71)
            printf("Salvador\n");
        if(a==11)
            printf("Sao Paulo\n");
        if(a==21)
            printf("Rio de Janeiro\n");
        if(a==32)
            printf("Juiz de Fora\n");
        if(a==19)
            printf("Campinas\n");
        if(a==27)
            printf("Vitoria\n");
        if(a==31)
            printf("Belo Horizonte\n");
        }
   else
        printf("DDD nao cadastrado\n");
    return 0;
}
