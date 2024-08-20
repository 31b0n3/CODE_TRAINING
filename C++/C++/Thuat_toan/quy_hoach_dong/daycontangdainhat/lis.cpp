#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> arr(N);
    vector<int> len(N,1);
    for (int i = 0; i<N;i++){
        cin>>arr[i];
        for(int j = 0;j<i;j++){
            if(arr[j]<arr[i]){
                len[i]=max(len[i],len[j]+1);
            }
        }
    }
    cout<<*max_element(len.begin(),len.end());
}