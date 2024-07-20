#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int even = 0;
    int odd = 0;
    while(N!= 0){
        if((N%10)%2 ==0){
            even++;
        }
        else{
            odd++;
        }
        N /=10;
    }
    cout<<odd<<" "<<even;
}