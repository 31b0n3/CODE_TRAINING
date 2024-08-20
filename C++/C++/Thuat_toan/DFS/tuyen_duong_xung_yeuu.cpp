#include<bits/stdc++.h>
using namespace std;
vector<int> city[101];
bool visited[101];
void dfs(int u){
    visited[u] = true;
    for(int v: city[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
int check(int N){
    memset(visited,false,101);
    int c = 0;
    for(int i =1; i<=N;i++){
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
    ifstream fin("CAU2.INP");
    ofstream fout("CAU2.OUT");
    int N,M,u,v;
    fin>>N>>M;
    vector<pair<int,int>> edges;
    for(int i = 0; i< M; i++){
        fin>>u>>v;
        city[u].push_back(v);
        city[v].push_back(u);
        edges.push_back({u,v});
    }
    int count = 0;
    for(auto edge : edges){
        u = edge.first;
        v = edge.second;
        city[u].erase(remove(city[u].begin(),city[u].end(),v),city[u].end());
        city[v].erase(remove(city[v].begin(),city[v].end(),u),city[v].end());
        if(check(N)){
            count++;
        }
        city[u].push_back(v);
        city[v].push_back(u);
        
    }
    fout<<count;
    fin.close();
    fout.close();
    return 0;
}