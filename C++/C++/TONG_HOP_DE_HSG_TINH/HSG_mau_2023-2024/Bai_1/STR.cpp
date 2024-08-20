#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin("STR.INP");
    ofstream fout("STR.OUT");
    string S;
    fin>>S;
    fin.close();
    int len = S.length();
    int count = 0;
    for(int i = 0; i<len;i++){
        if(S[i]!='0' && S[i]!='1'){
            count++;
        }
    }
    fout<<count;
    
}