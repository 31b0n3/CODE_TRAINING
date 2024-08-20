#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin>>N>>K;
    vector<int> arr(N+1,0);
    vector<int> sum(N+1,0);
    for(int i = 1; i<=N;i++){
        cin>>arr[i];
    }
    int maxsum = 0;
    int c =1;
    int sumnow = 0;
    int pos;
    while(c<=N){
        if(N-c>=K){
             pos = max_element(arr.begin() + c, arr.begin() + c + K)- arr.begin() ;
        }
        else{
            pos = max_element(arr.begin() + c, arr.begin() + N+1) - arr.begin() ;
        }
       sumnow += arr[pos];
       if(maxsum<sumnow){
        maxsum = sumnow;
       }
       c = pos + 1;
    }
    cout<< maxsum;
    return 0;
}