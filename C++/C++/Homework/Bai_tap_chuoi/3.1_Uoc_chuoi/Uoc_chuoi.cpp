#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string S;
    string X;
    cin>> S;
    int len = S.length();
    for(int i = 0; i< len; i++){
        if(X.empty()||S[i]==X[0]){
            int count = 1;
            for(int j = 1; j<X.length(); j++){
                if(S[++i]!=X[j]||i>=len){
                    break;
                }
                count++;

            }
            if(count!= X.length()){
                X = S.substr(0,i+1);
            }
        }
        else{
            X = S.substr(0,i+1);
        }
    }
    cout<<X;
    return 0;



}