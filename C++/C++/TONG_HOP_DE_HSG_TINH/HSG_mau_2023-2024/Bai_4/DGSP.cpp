#include<bits/stdc++.h>

using namespace std;
int arr[150000];
int pack(int weight,int n,int k){
    int count =1;
    int current = 0;
    for(int i = 0; i<n;i++){
        if(current + arr[i] > weight){
            current = 0;
            count++;
        }
        current += arr[i];
    }
    if(count<=k){
        return 1;
    }
    else return 0;
}
int main(){
    ifstream fin("DGSP.INP");
    ofstream fout("DGSP.OUT");
    int n,k; fin>>n>>k;
    int max = 0;
    long long int sum = 0;
    for(int i = 0; i<n; i++){
        fin>>arr[i];
        sum+= arr[i];
        if(max < arr[i]){
            max = arr[i];
        }
    }
    long long int l = max, r = sum,m,result;
    while(l<=r){
        m = l + (r-l)/2;
        if(pack(m,n,k)){
             result = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    fout<<result;
    fin.close();
    fout.close();
    return 0;


}
