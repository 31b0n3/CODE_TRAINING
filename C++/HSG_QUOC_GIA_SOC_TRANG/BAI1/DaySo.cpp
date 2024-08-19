#include<bits/stdc++.h>
using namespace std;
void re(vector<int>&A,int start,int end){
    while(start<end){
        swap(A[start++],A[end--]);
    }
}
int main(){
    ifstream fin("DaySo.inp");
    ofstream fout("DaySo.out");
    int  u,v,p,q;
    long long int k;
    fin>>k>>u>>v>>p>>q;
    vector<int>A;
    int tmp;
    while(fin>>tmp){
        A.push_back(tmp);
    }
    int n = A.size();


    map<vector<int>,int> check;
    check[A]=1;
    u--; v--; p--;q--;
    for(long long int i = 1; i<= k;i++){
        re(A,u,v);
        re(A,p,q);
        if(check[A]){
            i = k -(k%i);
        }
    }
    for(int i = 0;i<n;i++){
        fout<<A[i]<<" ";
    }
    fin.close();
    fout.close();
    return 0;
}