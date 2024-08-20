#include<iostream>
using namespace std;

int main(){
    int T,K;
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>K;
        int count = 0;
        for(int j =1;j<K/2;j++){
            count+=(K-j-1);
        }
        if(K%2!=0){
        count++;
        }
        cout<<count<<endl;
    }
    return 0;
}