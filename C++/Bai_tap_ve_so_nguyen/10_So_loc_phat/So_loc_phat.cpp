#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a;
    int check =1;
    while(a!=0){
        b=a%10;
        a/=10; 
        if(b != 0 && b!= 6&&b!=8){
            check = 0;
            break;
        }
    }
    if(check){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
