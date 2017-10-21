#include<iostream>
using namespace std;
int main(){
int a,s,l,i,j,temp,len,x,y;
cin>>s;
for(x=0;x<s;x++)
{
cin>>a;
int c[20000];
for(l=0;l<a;l++)
{
    cin>>c[l];
}
for(i=0;i<l-1;i++)
{

       for(j=i+1;j<l;j++)

    {

        if(c[i]>c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;

        }


    }

}
int e=0;
for(y=l-2;y>=0;y=y-3)
{
    e=e+c[y];
}
cout<<e<<endl;
}

return 0;}

