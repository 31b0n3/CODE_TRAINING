#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(n>m){
        int tmp = n;
        n=m;
        m=tmp;
    }
    for(int i=n;i<=m;i++){
        int sum = 0;
        for(int j =1;j*j<i;j++){
            if(i%j==0){
                sum+=j;
                if(i/j!=j&&j!=1){
                    sum+=(i/j);
                }
            }
        }
        if (sum == i){
            cout<< i<<" ";
        }
    }
 
}