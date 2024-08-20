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
    int check = 0;
    cin>>b;
    mark(b);
    int i =2;
    while(b!=1){
        check = 1;
        while(b%i ==0 && (!(m[i>>6]&(1<<((i&63)>>1)))||i==2)){
            b /=i;
            if(check){
                cout<<i <<" ";
            }
            check =0;
        }
        
        
        i++;
    }
}