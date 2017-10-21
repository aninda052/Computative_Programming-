#include<iostream>
#include<stdio.h>
using namespace std;

int main (){
string s;
int x[30];
while(getline(cin,s))
{
   int len,a;
   len=s.length();
   for(a=0;a<len;a++)
   {
       if(s[a]=='1' ||s[a]=='0'){x[a]=s[a]; }
       else if(s[a]=='-'){x[a]=s[a];}
      else if(s[a]=='A' ||s[a]=='B' ||s[a]=='C'){x[a]=50; }
      else if(s[a]=='D' ||s[a]=='E' ||s[a]=='F'){x[a]=51; }
      else if(s[a]=='G' ||s[a]=='H' ||s[a]=='I'){x[a]=52; }
      else if(s[a]=='J' ||s[a]=='K' ||s[a]=='L'){x[a]=53; }
      else if(s[a]=='M' ||s[a]=='N' ||s[a]=='O'){x[a]=54; }
      else if(s[a]=='P' ||s[a]=='Q' ||s[a]=='R'||s[a]=='S'){x[a]=55; }
      else if(s[a]=='T' ||s[a]=='U' ||s[a]=='V'){x[a]=56; }
       else if(s[a]=='W' ||s[a]=='X' ||s[a]=='Y'||s[a]=='Z'){x[a]=57; }
   }
    for(a=0;a<len;a++)
   {
  printf("%c",x[a]);

   }
   cout<<endl;
}

return 0;}
