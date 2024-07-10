#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long double N;
    cin>>N;
    long double M = roundf((N/64*100)*100)/100;
    cout<< M<<" "<<roundf((M/100*36)*100)/100;
    return 0;
    
}