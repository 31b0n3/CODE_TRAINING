#include<fstream>
#include<iostream>
#include<math.h>
using namespace std;
int A[1000]={0};
int B[1000]={0};
int k(int Z){
    int tong=0;
    for (int i=1;i<sqrt(Z);i++){
        if(Z%i==0){
            tong+=i;
            if(i!=Z/i){
                tong+=Z/i;
            }
        }
    }
    return tong;
}
int main(){
    ifstream fin("GHH.INP");
    ofstream fout("GHH.OUT");
    int N;
    fin>>N;
    for (int i=0;i<N;i++){
        fin>>A[i];
    }
    fin.close();
    int dem=0;
    int countt=0;
    for (int i=0;i<N;i++){
        if(2*A[i]<=k(A[i])){
            B[countt++]=A[i];
            dem++;
        }
    }
    fout<<dem<<endl;
    for (int i=0;i<dem;i++){
        fout<<B[i]<<endl;
    }
    fout.close();
}