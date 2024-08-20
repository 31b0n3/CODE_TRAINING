#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int arr1[15];
    int arr2[15];
    int count1=0;
    int count2=14;
    for(int j =1;j*j<m;j++){
        if(m%j==0){
            arr1[count1++]=j;
            if(m/j!=j){
                arr2[count2--]=m/j;
            }
        }
    }
    int tmp = 0;
    while(tmp<count1){
        cout<<arr1[tmp++]<<" ";
    }
    tmp = 15-tmp;
    while(tmp<15){
        cout<<arr2[tmp++]<<" ";
    }

    return 0;
}  
