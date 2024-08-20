#include<iostream>
using namespace std;
int main(){
    int T,p,n;
    cin>>T;
    for (int i = 0;i<T;i++){
        cin>>n>>p;
        int sum = 0;
        while(n>=p){
            sum+=n/p;
            n/=p;
            
        }
        cout<<sum<<endl;
        return 0;
    }
}