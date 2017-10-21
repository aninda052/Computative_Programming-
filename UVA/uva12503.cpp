#include<bits/stdc++.h>
using namespace std;
int arr[500];
int main (){
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
int a,s,d,f,z=0,g,cnt;
string x;
scanf("%d",&a);
for(s=1;s<=a;s++)
{
    scanf("%d",&d);
    cnt=0;
    cin.ignore();
    for(f=1;f<=d;f++){

        cin>>x;
        if(x=="LEFT"){cnt=cnt-1;arr[f]=-1;}
        else if(x=="RIGHT"){cnt=cnt+1;arr[f]=1;}
        else{
         int w;
         cin>>x>>w;
         cnt+=arr[w];
        arr[f]=arr[w];

        }

    }

    printf("%d\n",cnt);

}
return 0;
}
