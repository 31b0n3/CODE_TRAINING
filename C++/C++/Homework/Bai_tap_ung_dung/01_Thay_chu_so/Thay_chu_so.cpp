#include<iostream>
#include<math.h>
using namespace std;
long int arr[100000]={0};
int main(){
    int T,count;
    long int tmp;
    cin>>T;
    for(int i = 0; i<T;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<T;i++){
        tmp = arr[i];
        count = 1;
        while(tmp!=0){
            if(tmp%10==0){
                arr[i]+=(5*(count));
            }
            count*=10;
            tmp/=10;

        }
        cout<<arr[i]<<endl;
        
    }
    return 0;
}