#include<iostream>
#include<math.h>
using namespace std;
int m[15625000]={0};
void mark(int end){
    for(int i=3; i<sqrt(end);i+=2){
        for(long int j = i*i;j<=end;j+=(i*2)){
            if(!(m[j>>6]&(1<<((j&63)>>1)))){
                m[j>>6] |=(1<<((j&63)>>1));

            }
        }
    }
}
int main(){
    int b;

    cin>>b;
    mark(b);
    int i =2;
    while(b!=1){
        while(b%i ==0 && (!(m[i>>6]&(1<<((i&63)>>1)))||i==2)){
            cout<<i <<" ";
            b /=i;
        }
        i++;
    }
}