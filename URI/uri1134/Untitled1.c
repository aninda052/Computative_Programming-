#include<stdio.h>

int main(){

int a=1,s,d=0,f=0,g=0;
while(a>0)
    {
        scanf("%d",&s);
        if(s==4){break;}
        else if(s==1){d++;}
        else if(s==2){f++;}
        else if(s==3){g++;}
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",d,f,g);
return 0;
}
