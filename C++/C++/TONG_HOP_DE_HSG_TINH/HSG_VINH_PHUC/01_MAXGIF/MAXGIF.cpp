#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
int main(){
    ifstream fin("MAXGIF.INP");
    ofstream fout("MAXGIF.OUT");
    int N,a,b;
    int max =0;
    fin>>N;
    fin>>b;
    for(int i = 0;i<N;i++){
        a=b;
        fin>>b;
        if(max< a+b){
            max = a+b;
        }
    }
    fout<<max;
    fin.close();
    fout.close();
    return 0;
}

