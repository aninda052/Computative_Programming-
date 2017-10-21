
#include<stdio.h>

int main(){

    int x,h,y,a,b,m;
    scanf("%d %d %d %d",&x,&a,&y,&b);

    if(a==b)
    {
      if((x<12 && x<y) || (x>12<y && x<y) )
       {
            h=abs((x*60)-(y*60))/60;
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",h);

       }
       else
       {
            h=abs((1440-(x*60))+(y*60))/60;
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",h);
       }
    }
      else
      {
        if((x<12 && x<y) || (x>12<y && x<y) )
            {
            if(a<b){m=b-a;}
            else{m=(60-a)+b;}
            h=abs((x*60)-(y*60))/60;
            if(h==1 && a>b){printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",m);}
            else{printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);}
            }
       else
            {
            if(a<b){m=b-a;}
            else{m=(60-a)+b;}
            h=abs((1440-(x*60))+(y*60))/60;
            if(h==1 && a>b){printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",m);}
            else{printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);}
            }
      }


    return 0;
}
