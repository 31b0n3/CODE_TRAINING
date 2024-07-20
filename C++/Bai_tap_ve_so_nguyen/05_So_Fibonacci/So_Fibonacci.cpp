#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s1=0;
    int s2=1;
    int tmp;
    for (int i = 0; i<n;i++){
        cout<<s1<<" ";
        tmp = s2;
        s2+=s1;
        s1=tmp;

    }
    return 0;
}