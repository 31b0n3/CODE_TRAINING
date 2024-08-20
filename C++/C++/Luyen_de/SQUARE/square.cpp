//https://gialai.ucode.vn/problems/gia-lai-a-1920-bai-2-khu-dat-tot-hinh-vuong-square-70-diem-83814
#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int prefixsum[1005][1005];
int main(){
    ifstream fin("SQUARE.INP");
    ofstream fout("SQUARE.OUT");
    int M,N;
    fin>>M>>N;
    for(int i = 1;i<=M;i++){
        for(int j = 1;j<=N;j++){
            fin>>arr[i][j];
            prefixsum[i][j]= prefixsum[i-1][j]+prefixsum[i][j-1]+arr[i][j]-prefixsum[i-1][j-1];


        }
    }
    int s = min (M,N);
    while(s!=0){
        for(int i = 1; i<=M-s+1;i++){
            for(int j = 1;j<=N-s+1;j++ ){
                int total = prefixsum[i+s-1][j+s-1]- prefixsum[i+s-1][j-1]-prefixsum[i-1][j+s-1]+prefixsum[i-1][j-1];
                if (total == s*s){
                    fout<<s;
                    return 0;
                }
            }
        }
        s--;
    }
    fout<<0;
    return 0;
    

}