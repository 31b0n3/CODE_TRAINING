// #include<iostream>
// #include<math.h>
// #include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("DIVISION.INP");
    ofstream fout("DIVISION.OUT");
    int N,M;
    fin>>N>>M;
    int end = (pow(10,N)-1)/M *M;
    int start = pow(10,N-1)/M*M;
    int count = (end-start)/M +1;
    fout<< count;
    fin.close();
    fout.close();
    return 0;
}