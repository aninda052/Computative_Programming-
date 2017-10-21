#include<bits/stdc++.h>
#define mx 1000
using namespace std;
bool vis[mx];
int lvl[mx];
map<string,int>save;
map<int,string>save1;
vector<int>v[mx];
string a,b,x;
int match(string a,string b){
    int cnt=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!= b[i])cnt++;
        if(cnt==2)return -1;
    }
    return 1;
}
int bfs(int root){
    fill(lvl,lvl+mx,0);
    fill(vis,vis+mx,false);
    queue<int>q;
    q.push(root);
    lvl[root]=0;
    vis[root]=true;
    while(!q.empty()){
        root=q.front();
        q.pop();
        for(int i=0;i<v[root].size();i++){
            if(vis[v[root][i]]==false){
                lvl[v[root][i]]=lvl[root]+1;
                if(save1[v[root][i]]==b)return lvl[root]+1;
                q.push(v[root][i]);
                vis[v[root][i]]=true;

            }
        }
        if(q.empty())return -1;
    }
}
main (){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test;
    scanf("%d",&test);
    while(test--){
        int cnt1=1;
        while(cin>>x){
            if(x=="*")break;
            save[x]=cnt1;
            save1[cnt1]=x;
            cnt1++;
        }

        for(int i=1;i<cnt1;i++){
            for(int j=1;j<cnt1;j++){
                if(save1[i].size()==save1[j].size()){
                    int tmp=match(save1[i],save1[j]);
                    if(tmp==1){
                        v[i].push_back(j);
                        v[j].push_back(i);
                    }
                }
            }
        }
        size_t pos;
        string line;
        cin.ignore();
        while(getline(cin,line)){
            if(line.size()==0)break;
            pos=line.find(" ");
            a=line.substr(0,pos);
            b=line.substr(pos+1,line.size());
            if(a==b){cout<<a<<" "<<b<<" "<<"0"<<endl;}
            cout<<a<<" "<<b<<" "<<bfs(save[a])<<endl;
        }
        if(test!=0)printf("\n");
        memset(v,NULL,sizeof(v));
        save.clear();
        save1.clear();
    }

return 0;}
