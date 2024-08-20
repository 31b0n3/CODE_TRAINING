#include<bits/stdc++.h>
using namespace std;
int M[15625000]={0};
void mark(int end){
    for(int i = 3; i < sqrt(end);i+=2){
        for(int j = i*i;j<=end;j+=i*2){
            
            if(!(M[j>>6] & (1<<((j&63)>>1)))){
                M[j>>6] |= (1<<((j&63)>>1));
            }
        }
    }
}
bool check(int num){

    if((!(M[num>>6] & (1<<((num&63)>>1)))&&num%2 !=0&&num!=1)||num ==2){
                return 0;
            }
    return 1;
}
int main(){
    int n;
    cin>>n;
    mark(pow(10,n));
    for(int i = pow(10,n-1)+1;i<pow(10,n);i+=2){
        int tmp =i;
        
        int c =1;
        while(tmp){
            if(check(tmp)){
               c = 0;
               break; 
            }
            tmp/=10;     
        }
        if(c){
            cout<<i<<endl;
        }
        if(i ==2) i--;
        
    }
    return 0;
}