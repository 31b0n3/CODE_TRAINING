#include<iostream>
using namespace std;

int check(int a,int sum){
    int c=0;
    int element[10]={0};
    int count = 0;
    int tmp;
    while(a!=0){
        tmp = a%10;
        if(tmp==6&& !c){
            c=1;
        }
        sum+=(tmp);
        element[count++]= tmp;
        a/=10;
    }
    if(c){
        for(int i = 0; i< count/2;i++){
            if(element[i]!= element[count-i-1]){
                return 0;
            }
        }
        return sum;
    }
    return 0;   
}
int main(){
    int a,b;
    int sum;
    cin>>a>>b;
    while(a<=b){

        if(a==161){
            int m = 0;
        }
        sum = 0;
        if(check(a,sum)%10==8){
                cout<<a<<" ";
        }
        a++;
    }
}