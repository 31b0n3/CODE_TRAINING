#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int mark(int end, vector<int> arr){
    for(int i = 3 ; i<sqrt(end);i++){
        for(int j = i*i; j<end; j+=(i*2)){
            if(!((arr[j>>6]) & (1<<((j&63)>>1)))){
                (arr[j>>6]) |= (1<<((j&63)>>1));
            }
        }
    }
    // for(int i =3;i<end;i+=2){
    //     if(!((arr[i>>6]) & (1<<((i&63)>>1)))){
    //         cout<<i<<" ";
    //     }
    // }

}

int main(){
    int b;cin>>b;
    vector<int> arr((b/64)+1,0);
    mark(b,arr);
    return 0;
    
}