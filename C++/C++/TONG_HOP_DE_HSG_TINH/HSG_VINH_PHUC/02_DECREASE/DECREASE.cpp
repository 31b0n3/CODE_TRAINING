#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fin("DECREASE.INP");
    ofstream fout("DECREASE.OUT");
    int N;
    fin>>N;
    int count = 0;
    while(N!=0){
        int tmp = N;
        int max = 0;
        while(tmp != 0){
            if(max < (tmp%10)){
                max = tmp %10;
            }
            tmp /=10;
        }
        N -=max;
        count ++;
    }
    fout<< count;
    fin.close();
    fout.close();
    return 0;

    
}