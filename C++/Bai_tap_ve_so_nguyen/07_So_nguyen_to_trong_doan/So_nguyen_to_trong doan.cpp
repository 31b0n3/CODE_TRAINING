#include<iostream>
#include<math.h>
using namespace std;
int m[15625000]={0};
void mark(int start,int end){
    for(int i=3; i<sqrt(end);i+=2){
        for(long int j = max(i*i,(start+i-1)/i*i);j<=end;j+=i){
            if(!(m[j>>6]&(1<<((j&63)>>1)))&&j%2!=0){
                m[j>>6] |=(1<<((j&63)>>1));

            }
        }
    }
}
int main(){
    int a,b;
    int count = 0;
    cin>>a>>b;
    mark(a,b);
    for(int i = a+1; i<b; i++){
        if(((!(m[i>>6]&(1<<((i&63)>>1))))&& i%2!=0)|| i ==2){
            cout<<i<<" ";
        }
    }
    return 0;
}