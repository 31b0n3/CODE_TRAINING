#include<iostream>
#include<fstream>
using namespace std;
int a[1000000];
int main(){
    ifstream fin("BAI5.INP");
    ofstream fout("BAI5.OUT");
    int N,S;
    fin>>N>>S;
    for (int i =0; i<N;i++){
        fin>>a[i];
    }
    fin.close();
    int start = 0;
    int end = 0;
    int sum = 0;
    int minlen = N;
    while (end<N){
        while(sum <S&&end<N){
            sum+=a[end++];
        }
        while(sum>=S&&start<N){
            if(minlen>end-start){
                minlen=end-start;
            }
            sum-=a[start++];

        }
    }
    fout<<minlen;
    fout.close();
    return 0;
}