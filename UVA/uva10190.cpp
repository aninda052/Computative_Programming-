#include<bits/stdc++.h>

using namespace std;

int arr[1000];

int main(){
    int n,m,flag,q,in;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>n>>m){

        if(n<2||m<2||m>n){printf("Boring!\n");}
        else{
            int j=n; flag=0; arr[0]=n;  in=1;
            while(j>1&&flag==0){
                if(j%m!=0) {flag=1;break;}
                j=j/m;
                arr[in]=j;
                in++;
            }
            if(flag==1) printf("Boring!\n");
            else {
                for(int i=0;i<in-1;i++){
                    printf("%d ",arr[i]);
                }
               printf("%d\n",arr[in-1]);
            }

        }
    }
}
