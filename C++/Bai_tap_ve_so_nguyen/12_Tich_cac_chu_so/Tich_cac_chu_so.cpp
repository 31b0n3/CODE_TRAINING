#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long int mul=1;
    while(n!=0){
        mul *= n%10;
        n/=10;
    }
    cout<< mul;
    
}