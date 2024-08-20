#include<iostream>
using namespace std;

int main(){
    int arr[100]={0};
    int charr[200];
    string S,X;
    int K;
    cin>>K>>S;
    int check =1;
    int count=0;
    for(int i = 0; i<S.length();i++){
        if(arr[int(S[i])]==0){
            charr[count++]= S[i];
        }
        arr[int(S[i])]++;
    }
    for(int i = 1; i<count;i++){
         if(arr[int(charr[i])]<K){
            check = 0;
            break;
         }
    }
    string final;
    
    if(check){
        int now =arr[int(charr[0])];
        for(int i =0; i<count;i++){
            final += charr[i];
        }
        for(int i = 0; i<now;i++){
            cout<<final;
        }
    }
    else{
        cout<<-1;
    }
    return 0;
}