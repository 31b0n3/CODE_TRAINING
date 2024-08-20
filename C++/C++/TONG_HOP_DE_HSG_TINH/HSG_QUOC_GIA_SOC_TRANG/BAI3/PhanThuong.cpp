#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("PhanThuong.inp");
    ofstream fout("PhanThuong.out");
    int N,M; fin>>N>>M;
    map<int,int> arr;
    int tmp;
    for(int i = 0; i<N; i++){
        fin>>tmp;
        arr[tmp]+=tmp;
    }
    for(int i =0; i<M;i++){
        fin>>tmp;
        arr.erase(tmp);
    }
    int max = 0;
    for(auto now:arr){
        if(max<now.second){
            max = now.second;
        }
    }
    fout<<max;
    fin.close();
    fout.close();
    return 0;
}