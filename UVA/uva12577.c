#include<stdio.h>
int main (){
char a[5];
int x=1;
while(x>0)
{
    scanf("%s",a);
    if(strcmp(a,"*")==0){break;}
    else if(strcmp(a,"Hajj")==0){printf("Case %d: Hajj-e-Akbar\n",x);}
    else {printf("Case %d: Hajj-e-Asghar\n",x);}
    x++;
}
return 0;
}
