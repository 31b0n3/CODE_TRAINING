#include<iostream>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;
int A[100000]={0};
int cpys[100000]={0};
int arr[100000]={0};
int main(){
    int N;
    int count = 0;
    cin>>N;
    for(int i = 0; i< N; i++){
        cin>>arr[i];
        if(A[arr[i]] !=1){
            A[arr[i]]++;
            cpys[count++]=arr[i];
        }
    }
    sort(cpys,cpys+count);
    for(int i =0; i<count;i++){
        A[cpys[i]]= i+1;
    }
    for(int i = 0;i<N;i++){
        cout<< A[arr[i]]<<" ";
    }

}