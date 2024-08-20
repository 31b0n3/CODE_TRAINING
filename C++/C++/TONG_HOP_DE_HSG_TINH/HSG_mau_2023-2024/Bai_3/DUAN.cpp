#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
int V[100000]={0};
int L[100000]={0};
int countt[100000]={0};
int main(){
    ifstream fin("DUAN.INP");
    ofstream fout("DUAN.OUT");
    int N,S,tmp1,tmp2;
    int count = 0;
    int sum = 0;
    fin>>N>>S;
    for(int i = 0; i<N;i++){
        fin>>tmp1;
        fin>>tmp2;
        L[tmp1]+=tmp2;
        if(countt[tmp1]==0){
            V[count++]=tmp1;
        }
        countt[tmp1]++;
    }
    sort(V,V+count);
    for(int i = 0; i<count;i++){
        if(V[i]<=S){
            S+=L[V[i]];
            sum += countt[V[i]];
        }
    }
    fout<<sum;
    fin.close();
    fout.close();
    return 0;

}
