#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int T;
    cin>>T;
    long int n;
    int count1;
    for(int i = 0; i<T;i++){
        cin>>n;
        count1=0;
        while(n!=0){
            if(n%2==1){
                count1++;
            }
            n/=2;
        }
        if (count1 %2 ==0){
            cout<<"Chan"<<endl;
        }
        else{
            cout<<"Le"<<endl;
        }
       
        
    }
    return 0;
}