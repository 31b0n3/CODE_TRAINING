#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int sum = 0;
    for(int j =1;j*j<m;j++){
        if(m%j==0){
            sum+=j;
            if(m/j!=j&&j!=1){
                sum+=(m/j);
            }
        }
    }
    if (sum == m){
        cout<< 1;
    }
    else{
        cout<<0;
    }
    return 0;
}  
