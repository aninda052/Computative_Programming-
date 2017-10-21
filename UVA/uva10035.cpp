LOGIC VUL -_-
#include<iostream>
#include<stdio.h>
using namespace std;
string a,s;
int main(){
    int i,len1,len2,x;
    while(1){
cin>>a>>s;
if(a[0]-48==0 && s[0]-48==0){break;}
x=0;
len1=a.length();
len2=s.length();
for(i=0;i<10;i++)
{
    if((a[len1]+s[len2])-96>=10){x++;}
    len1--;len2--;
}
if(x==0){printf("No carry operations.\n");}
else{printf("%d carry operations.\n",x);}}
return 0;}
