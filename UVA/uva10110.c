#include<stdio.h>
#include<math.h>

int main (){
    long long int n,y,x;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0){break;}
        x=sqrt(n);
        y=x*x;
         if(n==y){printf("yes\n");}
        else {printf("no\n");}
    }
return 0;
}
