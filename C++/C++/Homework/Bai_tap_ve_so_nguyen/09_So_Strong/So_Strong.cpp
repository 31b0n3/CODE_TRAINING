#include<iostream>
using namespace std;
int gt[10]={0,1,1,1,1,1,1,1,1,1};
int main(){
    int j,a,b,sum;
    cin>>a>>b;
    for(int i =9; i>0;i--){
        j = 9;
        while(j!=i-1){
            gt[j] *=i;
            j--;
        }
    }
    while(a<b){
        sum = 0;
        int tmp =a;
        while(tmp!=0){
            sum+= gt[tmp%10];
            tmp /=10;

        }
        if (sum==a){
            cout<<a<<" ";
        }
        a++;

    }
    return 0;
}

