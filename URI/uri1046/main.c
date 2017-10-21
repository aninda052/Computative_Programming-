
#include<stdio.h>

int main(){

    int x,h,y;
    scanf("%d %d",&x,&y);


       if((x<12 && x<y) || (x>12<y && x<y) )
       {
            h=abs((x*60)-(y*60))/60;
        printf("O JOGO DUROU %d HORA(S)\n",h);

       }
       else
       {
            h=abs((1440-(x*60))+(y*60))/60;
        printf("O JOGO DUROU %d HORA(S)\n",h);
       }


    return 0;
}
