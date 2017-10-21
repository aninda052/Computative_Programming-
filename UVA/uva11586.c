#include<stdio.h>
#include<stdlib.h>
int main (){

int a,s,i,x,y;
char d[159];
scanf("%d",&a);
for(s=0;s<a;s++)
{
    //scanf("%s",d);
getline(&d);
    x=0;y=0;
    for(i=0;i<10;i++)
    {

        //if(d[i]==EOF){break;}
        if(d[i]=='M'){x++;}
        else if(d[i]=='F'){y++;}
        printf("%c\n",d[i]);
    }

    if(x==y){printf("LOOP\n");}
    else{printf("NO LOOP\n");}
}
return 0;
}
