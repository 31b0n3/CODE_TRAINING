#include<iostream>
#include<math.h>
using namespace std;
int M[15625000]={0};
void mark(int end){
    for(int i = 3; i<sqrt(end);i++){
        for(int j= i*i;j<end;j+=2*i){
            if(!((M[j>>6])&(1<<((j&63)>>1)))){
                M[j>>6] |= (1<<((j&63)>>1));
            }
        }
    }
}
int main(){
    int b;
    cin>>b;
    mark(b);
    if(b>=2){
        cout<< 2<<" ";
    }
    for(int i = 3; i<b;i+=2){
        if(!((M[i>>6])&(1<<((i&63)>>1)))){
                cout<<i<<" ";
            }
    }
    return 0;
}