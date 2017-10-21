#include<bits/stdc++.h>
#define mx 1299710
bool arr[mx];
using namespace std;

void shive (){
    int y=sqrt(mx);
    arr[1]=true;
    for(int i=3;i<=y;i+=2){
        if(arr[i]==false){
          int i2=i+i;
          for(int j=i*i;j<=mx;j+=i2){
                arr[j]=true;
          }

        }
    }
}
int main (){
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int n,i,j;
    shive();
    while(1){
        scanf("%d", &n);
        if(n==0)break;
        if((arr[n]==false && n%2!=0)||n==2){printf("0\n");}
        else{
            for(i=n;i>=3;i--){
                if(arr[i]==false  && i%2!=0)break;

            }
            for(j=n;j<=mx;j++){
                if(arr[j]==false  && j%2!=0)break;
            }
            //cout<<i<<" "<<j<<endl;
            printf("%d\n",j-i);

        }



    }

return 0;
}


