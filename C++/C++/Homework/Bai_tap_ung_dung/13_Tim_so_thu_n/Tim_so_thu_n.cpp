#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
int sqr(int x) {
    return x*x;
}
 
int poww(int a, int b) {
    if (b == 0) return 1;
    else
        if (b % 2 == 0)
            return sqr(poww(a, b/2));
        else
            return a * (sqr(poww(a, b/2)));
}
int main(){
    long int K;
    int T;
    cin>>T;
    for(int i = 0;i<T;i++){
    cin>>K;
    
    int m=1;
    int count=0;
    do{
        count +=poww(2,m++);
    }
    while(K>count);
    int now = poww(2,--m);
    count -= now ;
    int pos = K-count;
    for (int i = 0; i<m;i++){
        if(pos<=now/2){
            cout<<4;
            now/=2;
        }
        else{
            cout<<7;
            now/=2;
            pos-=now;
        }

    }
    return 0;    
}
}