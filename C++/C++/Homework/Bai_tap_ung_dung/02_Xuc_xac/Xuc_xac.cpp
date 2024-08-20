#include<iostream>
using namespace std;

int main(){
    int a[500]={0}; 
    int T;
    cin>>T;
    for(int i = 0;i<T;i++){
        cin>>a[i];
    }
    for(int i = 0;i<T;i++){
        cout<<7-a[i]<<endl;
    }
    return 0;
}