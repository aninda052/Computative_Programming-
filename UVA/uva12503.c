#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){

int a,s,d,f,z=0,g,q[15];
char x[10];
scanf("%d",&a);
for(s=0;s<a;s++)
{
    scanf("%d",&d);
    for(f=1;f<=d;f++)
    {
        scanf("%s",x);
        //q[f]=x;

        if(strcmp(x,"left")==0){z-=1;q[f]=-1;}
        else if(strcmp(x,"right")==0){z+=1;q[f]=1;}
        else
            {scanf("%d",&g);
          //if(strcmp(q[g-1],"left")==0){z++;}
           // else {z--;}
           s+=q[g];
        q[f]=q[g];
            }
           printf("%s\n",q);
            printf("%s\n",x);
    }
  //  printf("%s",q[2]);
    printf("%d\n",z);
}
return 0;
}
