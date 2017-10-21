#include<bits/stdc++.h>
using namespace std;
int arr[101][101],arr1[101];
int main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m,q,cse=1;
    map<string,int>mat;
    map<int,string>mat1;
    while(cin>>n){
        q=n;
        int cnt=1,y,z;
        mat.clear();
        mat1.clear();
        memset(arr,0,sizeof arr);
        memset(arr1,0,sizeof arr1);
        while(n--){
            string bev;
            cin>>bev;
            mat.insert(pair<string,int>(bev,cnt));
            mat1.insert(pair<int,string>(cnt,bev));
            cnt++;
        }

        cin>>m;
        string bev1,bev2;

         while(m--){
            int flg=0;
            cin>>bev1>>bev2;
            if(arr[mat[bev1]][mat[bev2]]==1)flg=1;
            arr[mat[bev1]][mat[bev2]]=1;
            if(flg==0)arr1[mat[bev2]]+=1;
        }
        int s=q;
        printf("Case #%d: Dilbert should drink beverages in this order:",cse);
        while(s--){
            for(int x=1;x<=q;x++){
                if(arr1[x]==0){
                    int column;
                    for(column=1;column<=q;column++){
                        if(arr[x][column]>0){
                            arr1[column]-=1;

                        }
                    }
                    int it;
                    cout<<" "<<mat1[x];
                    arr1[x]=-1;
                    break;
                }
            }

        }
        cout<<"."<<endl<<endl;
        cse++;
    }
    return 0;
}

