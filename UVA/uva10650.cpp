#include<bits/stdc++.h>
using namespace std;
int flag[32001];
int sieve(){
    flag[1]=1;
    flag[0]=1;
    int i,j;
     for(i=4;i<=32001;i+=2){

        flag[i]=1;
    }
    for(i=3;i<=32001;i+=2){
        if(flag[i]==0){
            for(j=i*i;j<=32001;j+=i){
                flag[j]=1;}

        }
    }
}
int main (){

sieve();
int a,s,i,j;
vector<int>arr;
while(cin>>a>>s){
    if(a==0&&s==0)break;
    if(a>s)swap(a,s);
    if(a%2==0)a=a+1;
    arr.clear();
    int tmp=0,diff=0,diff1=0,fl=0;
    for(i=a;i<=s;i+=2){
        if(flag[i]==0){
            diff=i-tmp;
            if(arr.size()>=3&&diff1!=diff )  {
                    int flg=0,flg1=0;
                    int X=arr[0]-diff1;
                    int Y=arr[arr.size()-1]+diff1;
                        if(flag[X]==0&&X<a){
                            for(j=X+1;j<arr[0];j++){
                                if(flag[j]==0){
                                    flg=0;
                                    diff1=0;
                                    break;
                                }
                                else flg=1;
                            }
                        }
                   if(flag[Y]==0&&Y>s){
                        for(j=arr[arr.size()-1]+1;j<Y;j++){
                            if(flag[j]==0){
                                flg1=0;
                                diff1=0;
                                break;
                            }
                            else flg1=1;
                        }
                    }
                   if(flg==0&&flg1==0){
                        printf("%d",arr[0]);
                        for(j=1;j<arr.size();j++){
                            printf(" %d",arr[j]);
                        }
                       printf("\n");
                   }
                    arr.clear();
                    arr.push_back(tmp);
                    diff1=0;
            }

            if(arr.size()>0 && diff!=diff1 && diff1!=0){arr.clear();diff1=0;arr.push_back(tmp);}
            if(diff1==0 || diff==diff1){arr.push_back(i);}
            tmp=i;
            if(fl==1)diff1=diff;
            fl=1;
        }
    }

    if(arr.size()>=3){
        int flg=0,flg1=0;
        int X=arr[0]-diff1;
        int Y=arr[arr.size()-1]+diff1;
        if(flag[X]==0&&X<a){
            for(i=X+1;i<arr[0];i++)
                if(flag[i]==0){flg=0;break;}
                else flg=1;


        }
        if(flag[Y]==0&&Y>s){
           for(i=arr[arr.size()-1]+1;i<Y;i++){
                if(flag[i]==0){;flg1=0;break;}
                else flg1=1;
           }
        }
       if(flg==0&&flg1==0){
        printf("%d",arr[0]);
        for(i=1;i<arr.size();i++){
            printf(" %d",arr[i]);
        }
        printf("\n");
        }
    }

}
return 0;}
