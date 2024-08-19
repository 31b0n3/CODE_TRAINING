#include<bits/stdc++.h>
using namespace std;
vector<int>dat[101];
bool visited[101];
void dfs(int u){
    visited[u]=true;
    for(int v: dat[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
int check(int N){
    memset(visited,false,sizeof(visited));
    int c=0;
    for(int i= 1; i<=N;i++){
        if(!visited[i]){
            dfs(i);
            c++;
            if(c>1){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    ifstream fin("KhuDat.inp");
    ofstream fout("KhuDat.out");
    int N,M,u,v; fin>>N>>M;
    int count =0;
    vector<pair<int,int>> edges;
    for(int i = 0; i<M;i++){
         fin>>u>>v;
        dat[u].push_back(v);
        dat[v].push_back(u);
        edges.push_back({u,v});
    }
    for (auto edge : edges){
        u = edge.first;
        v = edge.second;
        dat[u].erase(find(dat[u].begin(),dat[u].end(),v));
        dat[v].erase(find(dat[v].begin(),dat[v].end(),u));

        if(check(N)){
            count++;
        }
        dat[u].push_back(v);
        dat[v].push_back(u);
    }
    stack<int>result;
    while(count!=0){
        result.push(count%2);
        count/=2;
    }
    while(!result.empty()){
        fout<<result.top();
        result.pop();
    }
    fout.close();
    fin.close();
    return 0;



}