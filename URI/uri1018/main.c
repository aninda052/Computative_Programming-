#include<stdio.h>

int main(){
        int N,h,i,f,g,t,u,ten,v,five,w,x,two;
        scanf("%d",&N);
        h=N/100;
        i=N%100;

        f=i/50;
        g=i%50;

        t=g/20;
        u=g%20;

        ten=u/10;
        v=u%10;

        five=v/5;
        w=v%5;

        two=w/2;
        x=w%2;

        printf("%d\n",N);
        printf("%d nota(s) de R$ 100,00\n",h);
        printf("%d nota(s) de R$ 50,00\n",f);
        printf("%d nota(s) de R$ 20,00\n",t);
        printf("%d nota(s) de R$ 10,00\n",ten);
        printf("%d nota(s) de R$ 5,00\n",five);
        printf("%d nota(s) de R$ 2,00\n",two);
        printf("%d nota(s) de R$ 1,00\n",x);

        return 0;

        }
