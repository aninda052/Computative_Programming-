#include<stdio.h>

int main (){
    int num,hours;
    float taka,sal;
    scanf("%d",&num);
    scanf("%d %f",&hours,&taka);
    sal=hours*taka;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",sal);
    return 0;

}
