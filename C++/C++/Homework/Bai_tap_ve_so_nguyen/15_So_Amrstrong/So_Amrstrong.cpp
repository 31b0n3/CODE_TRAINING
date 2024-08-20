#include<iostream>
#include<math.h>
using namespace std;
long long int p(long long int x){
    return x*x;
}
long long int poww(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        if(b%2==0){
            return p(pow(a,b/2));
        }
        else
            return a* p(pow(a,b/2));
    }
}
int main(){
    long int b,sum,t[50],tt;
    cin>>b;
    int count;
    for(long int tmp =0;tmp<b;tmp++){
        count=0;
        sum=0;
        tt=tmp;

        while(tt!=0){
            t[count]=tt%10;
            count++;
            tt/=10;
            
        }
        for(int i = 0; i<count;i++){
            sum+= poww(t[i],count);
        }
        if (sum== tmp){
            cout<<tmp<<" ";
        }
    }
    return 0;
}

