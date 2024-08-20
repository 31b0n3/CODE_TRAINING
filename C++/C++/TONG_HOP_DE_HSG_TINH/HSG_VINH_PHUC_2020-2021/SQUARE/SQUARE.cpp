#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[100]={0};
    int y[100]={0};
    int N;
    ifstream fin("SQUARE.INP");
    ofstream fout("SQUARE.OUT");
    fin>>N;
    for(int i = 0; i<N; i++){
        fin>> x[i];
        fin>> y[i];
    }
    int *xmax = max_element(x, x+N);
    int *xmin = min_element(x,x+N);
    int *ymax = max_element(y, y+N);
    int *ymin = min_element(y,y+N);

    int S = max(*xmax - *xmin,*ymax - *ymin);
    fout<< S*S;
    fin.close();
    fout.close();
    return 0;
}