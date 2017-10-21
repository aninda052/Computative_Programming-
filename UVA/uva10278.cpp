#include<bits/stdc++.h>
#define mx 510
using namespace std;
bool vis[mx];
int dist[mx];
bool station[mx];
multiset<pair<int,int> > st;
pair<int,int>pr;
vector<pair<int,int> > v[mx];
bool mxinternum[mx] ;
int minmx[mx],tmpreslt,rslt,mxdist,tmp[mx],m;


int dijkstra(int strt,int rg,int type){
    int cnt1=0;
    fill(vis,vis+rg+3,false);
    fill(dist,dist+rg+3,10000000);
    //fill(tmp,tmp+mx,0);
    int reslt=1000;
    dist[strt]=0;
    st.insert({0,strt});
    while(!st.empty()){
        pr=*st.begin();
        st.erase(st.begin());
        int nood=pr.second;
        if(station[nood])minmx[nood]=0;
        if(vis[nood])continue;
        vis[nood]==true;
        for(int i=0;i<v[nood].size();i++){
            int child=v[nood][i].first;
            int weight=v[nood][i].second;
            if(dist[nood]+weight<dist[child] && child!=strt ){
                dist[child]=dist[nood]+weight;
                st.insert({dist[child],child});


                if(minmx[child]>dist[child] && type==0){
                    minmx[child]=dist[child];
                }


                if(type==1){
                    if(dist[child]<minmx[child]){
                        tmp[child]=dist[child];
                    }
                    else tmp[child]=minmx[child];

                }
            }
        }

    }

    if(type==1){
        tmp[strt]=0;
        m= -1;
        for(int i=1; i<=rg; i++){
            if(station[i])continue;
            m=max(tmp[i],m);
        }
        if(m<tmpreslt){
            tmpreslt=m;
            rslt=strt;
        }
    }


}
main (){
   // freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,f,i,strt,intersection1,intersection2,weight;
    int arr[100];
    scanf("%d",&t);
    while(t--){

        scanf("%d %d",&f,&i);
        fill(station,station+i+3,false);
        int j=0;
        int i1=i,f1=f;
        fill(minmx,minmx+i1+3,100000000);
        while(f--){
            scanf("%d",&arr[j]);
            if(station[arr[j]]==false){station[arr[j]]=true;
            j++;}
        }
        string st;
        getline(cin,st);
        while(1){
            getline(cin,st);
            if (cin.eof() || st == "")break;
            istringstream is(st);
            is>>intersection1>>intersection2>>weight;
            v[intersection1].push_back(make_pair(intersection2,weight));
            v[intersection2].push_back(make_pair(intersection1,weight));
        }
       if(j>=i1){
            cout<<"1"<<endl<<endl;
            memset(v,NULL,sizeof(v));
            continue;
        }

        int k;
        for(k=0;k<j;k++){
            int tmp=arr[k];
            dijkstra( arr[k],i1,0 );
        }
        tmpreslt=10000000;
        for(i=1;i<=i1;i++){
            if(station[i])continue;
            dijkstra(i,i1,1);
        }


        if(m==0){
            int mxd=-1,r;
            for(int i=1;i<=i1;i++){
                mxd=max(mxd,minmx[i]);
                if(mxd==minmx[i])r=i;
            }
            cout<<r<<endl;
        }
        else cout<<rslt<<endl;

        fill(tmp,tmp+i1+3,0);
        memset(v,NULL,sizeof(v));
        if(t!=0)cout<<endl;

    }

return 0;}


