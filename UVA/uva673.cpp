#include<iostream>
#include<stack>
using namespace std;
int main (){
stack<char>stk;
int a,i,len,test;
string c;
cin>>a;
cin.ignore();
for(test=0;test<a;test++)
{getline(cin,c);

len=c.size();
for(i=0;i<len;i++)
{

        if(c[i]==' '){continue;}

        if(!stk.empty()&& stk.top()=='(' && c[i]==')'){stk.pop();}
        else if(!stk.empty()&& stk.top()=='[' && c[i]==']'){stk.pop();}
        else  {stk.push(c[i]);}

}

if(stk.empty())
            cout<<"Yes\n";
        else cout<<"No\n";
        while(!stk.empty()){stk.pop();}
        }
return 0;}
