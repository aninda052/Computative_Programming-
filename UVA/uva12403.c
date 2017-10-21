#include<stdio.h>
int main (){

int a, s,f=0,z=0;
char d[6];
scanf("%d",&a);
for(s=0;s<a;s++)
{
    scanf("%s",d);
    if(strcmp(d,"donate")==0){scanf("%d",&f);z=z+f;}
    if(strcmp(d,"report")==0){printf("%d\n",z);}

}
return 0;
}
