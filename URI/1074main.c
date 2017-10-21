#include<stdio.h>

int main(){
int a,s,z;
scanf("%d",&s);
for (a=0;a<s;a++)

{
    scanf("%d",&z);{
    if(z%2==0 && z*z*z<0)
    {
       printf("EVEN NEGATIVE\n");
    }

    else if(z%2==0 && z*z*z>0)
    {
       printf("EVEN POSITIVE\n");
    }
    else if(z%2==1 && z*z*z>0)
    {
       printf("ODD POSITIVE\n");
    }
    else if(z==0)
    {
        printf("NULL\n");
    }
     else if(abs(z)%2==1 && z*z*z<0)
    {
       printf("ODD NEGATIVE\n");
    }
    }
}
return 0;
}
