#include<iostream>
using namespace std;

int main(){
    int T,sub;
    long int cho,kham;
    int a[500][2]={0};
    cin>>T;
    for(int i =0; i<T;i++){
        cin>>a[i][0]>>a[i][1];
    }
    for(int i =0;i<T;i++){
        cho=(a[i][0]-1)*a[i][1];
        kham=(a[i][0]-1)*10;
        if(cho<kham){
            sub=kham-cho;
        }
        else{
            sub=cho-kham;
        }
        cout<<sub<<endl;
    }
    return 0;
}