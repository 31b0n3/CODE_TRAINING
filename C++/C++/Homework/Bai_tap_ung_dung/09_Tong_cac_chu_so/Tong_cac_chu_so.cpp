#include<iostream>
using namespace std;
 int main(){
    int T,n;
    cin>>T;
    for(int i = 0;i<T;i++){
        cin>>n;
        int sum = 0;
        if(n>=10){
            while(n>=10){
                sum+=n%10;
                n/=10;
            }
        }
        else{
            sum=n;
        }
        cout<< sum<<endl;

    }
 }