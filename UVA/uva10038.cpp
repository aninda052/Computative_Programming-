#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){

int a,len,i,j,temp,l=0;
string c,k;
//cin>>count;
//cin.ignore();
//for(k=1;k<=count;k++){
while(getline(cin,c)){
        int temp=0,count=0;
len=c.length();
for(i=0;i<len-1;i++)
{

       for(j=i+1;j<len;j++)
    {

        if(c[i]>c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;

        }


    }
}
for(i=(len-1)/2;i<len-1;i++){if(abs((c[i]-48)-(c[i+1]-48))==1){count=1;}
else{temp=1;}
cout<<abs((c[i]-48)-(c[i+1]-48))<<endl;}
if(count==temp)cout<<"Not jolly"<<endl;
else cout<<"Jolly"<<endl;
cout<<c<<endl;
}
return 0;}

